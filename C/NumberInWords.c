#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    char s[50];
    int count = 0;
    while (n != 0)
    {
        int d = n % 10;
        count++;
        n = n / 10;
        if (count == 2)
        {
            switch (d)
            {
            case 1:
                printf("%s","One ");
                break;

            case 2:
                printf("%s","Twenty ");
                break;

            case 3:
               printf("%s","Thirty ");
                break;

            case 4:
                printf("%s","Forty ");
                break;

            case 5:
                printf("%s","Fifty ");
                break;

            case 6:
                printf("%s","Sixty ");
                break;

            case 7:
                printf("%s","Seventy ");
                break;

            case 8:
                printf("%s","Eighty ");
                break;

            case 9:
                printf("%s","Ninty ");
                break;
            }
        }
        else
        {
            if (count == 3)
            {
                printf("%s","Hundred ");
            }
            else if (count == 4)
            {
                printf("%s","Thousand ");
            }
            switch (d)
            {
            case 1:
                printf("%s","One ");
                break;

            case 2:
                printf("%s","Two ");
                break;

            case 3:
                printf("%s","Three ");
                break;

            case 4:
                printf("%s","Four ");
                break;

            case 5:
                printf("%s","Five ");
                break;

            case 6:
                printf("%s","Six ");
                break;

            case 7:
                printf("%s","Seven ");
                break;

            case 8:
                printf("%s","Eight ");
                break;

            case 9:
                printf("%s","Nine ");
                break;
            }
        }
    }

    return 0;
}