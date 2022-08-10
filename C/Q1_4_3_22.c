#include <stdio.h>

struct date
{
    int d;
    int m;
    int y;
};

int main()
{
    int d1,m1,y1;
    printf("Enter date1\n");
    scanf("%d%d%d",&d1,&m1,&y1);

    int d2,m2,y2;
    printf("Enter date2\n");
    scanf("%d%d%d",&d2,&m2,&y2);

    struct date date1={d1,m1,y1};
    struct date date2={d2,m2,y2};

    if(date1.m==date2.m && date1.y==date2.y)
    {
        if(date1.d==date2.d)
        {
            printf("Same date\n");
        }
        else if(date1.d<date2.d)
        {
            printf("Date 1 is earlier");
        }
        else
        {
            printf("Date 2 is earlier");
        }
    }
    else if(date1.y==date2.y)
    {
        if(date1.m<date2.m)
        {
            printf("Date 1 is earlier");
        }
        else
        {
            printf("Date 2 is earlier");
        }
    }
    else if(date1.y<date2.y)
    {
        printf("Date 1 is earlier");
    }
    else
    {
        printf("Date 2 is earlier");
    }

    return 0;
}