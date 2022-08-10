#include<stdio.h>

struct Date
{
    int d;
    int m;
    int y;
};


int main()
{
    struct Date d1, d2;
    printf("Enter date1\n\n");
    scanf("%d",&d1.d);
    scanf("%d",&d1.m);
    scanf("%d",&d1.y);
    printf("\n\n\nEnter date2\n\n");
    scanf("%d",&d2.d);
    scanf("%d",&d2.m);
    scanf("%d",&d2.y);

    if(d1.d==d2.d && d1.m==d2.m && d1.y==d2.y)
    {
        printf("\n\n\nEQUAL\n");
    }
    else
    {
        printf("\n\n\nUNEQUAL\n");
    }

    return 0;
}