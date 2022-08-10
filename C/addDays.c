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

    printf("Enter number of days to be added\n");
    int days;
    scanf("%d",&days);

    if(d1+days <= numberOfDaysInAMonth(m1,y1))
    {
        d1+=days;
    }
    else
    {
        
        days=days-numberOfDaysInAMonth(m1,y1)+d1;
        m1++;
        while(days>numberOfDaysInAMonth(m1,y1))
        {
            days=days-numberOfDaysInAMonth(m1,y1);
            m1++;
            if(m1==13)
            {
                m1=1;
                y1++;
            }
        }
        d1=days;
    }
    printf("New Date : %d / %d / %d",d1,m1,y1);

    return 0;
}