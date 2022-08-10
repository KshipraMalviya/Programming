#include<stdio.h>

int numberOfDaysInAMonth(int m,int y)
{
    switch(m)
    {
        case 1:
        return 31;

        case 2:
        switch((y%4==0 && y%100!=0) || (y%100==0 && y%400==0))
        {
            case 1:
            return 29;

            default:
            return 28;
        }

        case 3:
        return 31;

        case 4:
        return 30;

        case 5:
        return 31;

        case 6:
        return 30;

        case 7:
        return 31;

        case 8:
        return 31;

        case 9:
        return 30;

        case 10:
        return 31;

        case 11:
        return 30;

        case 12:
        return 31;
    }
}

int main()
{
    int d1,m1,y1;
    printf("Enter first date (date, month and year)\n");
    scanf("%d%d%d",&d1,&m1,&y1);

    int d2,m2,y2;
    printf("Enter second date (date, month and year)\n");
    scanf("%d%d%d",&d2,&m2,&y2);

    if(y1==y2)
    {
        if(m1==m2)
        {
            printf("Difference in dates = %d days",(d1-d2));
        }
        else
        {
            int d=numberOfDaysInAMonth(m2,y2)-d2;
            int sum=0;
            for(int x=m2+1; x<m1; x++)
            {
                sum+=numberOfDaysInAMonth(x,y1);
            }
            sum+=d+d1-1;
            printf("Difference in dates = %d days",sum);
        }
    }
    else
    {
        int sum=numberOfDaysInAMonth(m2,y2)-d2;
        for(int x=m2+1; x<=12; x++)
        {
            sum+=numberOfDaysInAMonth(x,y2);
        }
        for(int x=y2+1; x<y1; x++)
        {
            if((x%4==0 && x%100!=0) || (x%100==0 && x%400==0))
            {
                sum+=366;
            }
            else
            {
                sum+=365;
            }
        }
        for(int x=1; x<m1; x++)
        {
            sum+=numberOfDaysInAMonth(x,y1);
        }
        sum+=d1-1;
        printf("Difference in dates = %d days",sum);
    }

    return 0;
}