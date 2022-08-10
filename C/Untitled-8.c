#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    if(n==0)
    {
        printf("Zero");
        return 0;
    }
    int k = n, t = n;
    int count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    int one = -1;
    int ten = -1;
    if (count >= 2)
    {
        one = k % 10;
        k = k / 10;
        ten = k % 10;
    }
    int p = pow(10, count - 1);
    while (count != 0)
    {
        int d = t / p;
        t = t % p;
        p=p/10;

        if (count == 2 && ten == 1)
        {
            switch (one)
            {
            case 0:
                printf("%s", "Ten ");
                count--;
                break;

            case 1:
                printf("%s", "Eleven ");
                count--;
                break;

            case 2:
                printf("%s", "Twelve ");
                count--;
                break;

            case 3:
                printf("%s", "Thirteen ");
                count--;
                break;

            case 4:
                printf("%s", "Fourteen ");
                count--;
                break;

            case 5:
                printf("%s", "Fifteen ");
                count--;
                break;

            case 6:
                printf("%s", "Sixteen ");
                count--;
                break;

            case 7:
                printf("%s", "Seventeen ");
                count--;
                break;

            case 8:
                printf("%s", "Eighteen ");
                count--;
                break;

            case 9:
                printf("%s", "Nineteen ");
                count--;
                break;
            }
        }
        if (count == 2 && ten != 1)
        {
            switch (d)
            {
            case 2:
                printf("%s", "Twenty ");
                break;

            case 3:
                printf("%s", "Thirty ");
                break;

            case 4:
                printf("%s", "Forty ");
                break;

            case 5:
                printf("%s", "Fifty ");
                break;

            case 6:
                printf("%s", "Sixty ");
                break;

            case 7:
                printf("%s", "Seventy ");
                break;

            case 8:
                printf("%s", "Eighty ");
                break;

            case 9:
                printf("%s", "Ninty ");
                break;
            }
        }
        if (count == 3 || count == 4 || (count == 1 && ten != 1))
        {
            switch (d)
            {
            case 1:
                printf("%s", "One ");
                break;

            case 2:
                printf("%s", "Two ");
                break;

            case 3:
                printf("%s", "Three ");
                break;

            case 4:
                printf("%s", "Four ");
                break;

            case 5:
                printf("%s", "Five ");
                break;

            case 6:
                printf("%s", "Six ");
                break;

            case 7:
                printf("%s", "Seven ");
                break;

            case 8:
                printf("%s", "Eight ");
                break;

            case 9:
                printf("%s", "Nine ");
                break;
            }
        }
        if (count == 3 && d != 0)
        {
            printf("%s", "Hundred ");
        }
        else if (count == 4)
        {
            printf("%s", "Thousand ");
        }

        count--;
    }

    return 0;
}