#include <stdio.h>

int main()
{
    printf("Menu\n\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    printf("5 - Remainder Calculation\n");
    printf("6 - Larger out of two numbers\n");
    printf("0 - Exit\n");
    int a, b, c;
    do
    {
        printf("\nEnter your choice\n");
        scanf("%d", &c);
        if (c == 0)
        {
            break;
        }
        printf("Enter two numbers\n");
        scanf("%d%d", &a, &b);
        switch (c)
        {
        case 0:
            break;

        case 1:
            printf("%d + %d = %d\n", a, b, (a + b));
            break;

        case 2:
            printf("%d - %d = %d\n", a, b, (a - b));
            break;

        case 3:
            printf("%d x %d = %d\n", a, b, (a * b));
            break;

        case 4:
            printf("%d / %d = %d\n", a, b, (a / b));
            break;

        case 5:
            printf("%d modulo %d = %d\n", a, b, (a % b));
            break;

        case 6:
            printf("Larger out of %d and %d is %d.\n", a, b, (a > b) ? a : b);
            break;

        default:
            printf("Invalid Input. Enter correct option.\n");
        }

    } while (c != 0);

    return 0;
}