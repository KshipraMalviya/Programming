#include<stdio.h>

int main()
{
    int d,m,y;
    printf("Enter date, month and year\n");
    scanf("%d%d%d",&d,&m,&y);
    switch(m)
    {
        case 1:
        printf("Number of days remaining : %d",31-d);
        break;

        case 2:
        switch((y%100==0 && y%400==0) || (y%4==0 && y%100!=0))
        {
            case 1:
            printf("Number of days remaining : %d",29-d);
            break;

            default:
            printf("Number of days remaining : %d",28-d);
        }
        break;

        case 3:
        printf("Number of days remaining : %d",31-d);
        break;

        case 4:
        printf("Number of days remaining : %d",30-d);
        break;

        case 5:
        printf("Number of days remaining : %d",31-d);
        break;

        case 6:
        printf("Number of days remaining : %d",30-d);
        break;

        case 7:
        printf("Number of days remaining : %d",31-d);
        break;

        case 8:
        printf("Number of days remaining : %d",31-d);
        break;

        case 9:
        printf("Number of days remaining : %d",30-d);
        break;

        case 10:
        printf("Number of days remaining : %d",31-d);
        break;

        case 11:
        printf("Number of days remaining : %d",30-d);
        break;

        case 12:
        printf("Number of days remaining : %d",31-d);
        break;
    }

    return 0;
}