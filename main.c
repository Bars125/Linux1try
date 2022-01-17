#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void num_to_letter(int num);

int main()
{
    int number, temp = 0, n = 0;
    for (;;)
    {
        printf("Enter number from 1 to 9999: ");
        scanf("%d", &number);
        if (number > 9999 || number < 1)
        {
            printf("retard...\n");
        }
        else
        {
            break;
        }
    }

    //letter quantity
    temp = number;
    do {
        n++;
    } while ((temp /= 10) > 0);

    //reverse number to show letters in correct order
    char arr[4] = "";
    for (int i = 0;i < n;i++) {
        temp = number % 10;
        number /= 10;
        arr[i] = temp;
    }

    if (n == 4) {
        number = arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
    }
    else if (n == 3) {
        number = arr[0] * 100 + arr[1] * 10 + arr[2];
    }
    else if (n == 2) {
        number = arr[0] * 10 + arr[1];
    }
    else {
        number = arr[0];
    }

    while (number != 0)
    {
        temp = number % 10;
        num_to_letter(temp);
        number /= 10;
        switch (n) {
            case 1:
                printf("");
                n--;
                break;
            case 2:
                printf("ty ");
                n--;
                break;
            case 3:
                printf(" hundred ");
                n--;
                break;
            case 4:
                printf(" thousand ");
                n--;
                break;
            default:
                printf("");
                break;
        }
        printf(" ");
    }

    return 0;
}

void num_to_letter(int num)
{
    switch (num) {
        case 1:
            printf("one");
            break;

        case 2:
            printf("two");
            break;

        case 3:
            printf("three");
            break;

        case 4:
            printf("four");
            break;

        case 5:
            printf("five");
            break;

        case 6:
            printf("six");
            break;

        case 7:
            printf("seven");
            break;

        case 8:
            printf("eight");
            break;

        case 9:
            printf("nine");
            break;

        default:
            printf("unknown");
            break;
    }
}
