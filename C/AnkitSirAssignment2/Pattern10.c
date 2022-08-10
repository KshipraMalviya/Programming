#include<stdio.h>

int main()
{
    for(int x=1; x<=5; x++)
    {
        for(int y=1; y<=6-x; y++)
        {
            printf("%c ",64+y);
        }
        for(int y=7-x ;y<=5; y++)
        {
            printf("  ");
        }
        for(int y=6; y<=9; y++)
        {
            if(y-x<=3)
            {
                printf("  ");
            }
            else
            {
                printf("%c ",64+y);
            }
        }
        printf("\n");
    }

    return 0;
}