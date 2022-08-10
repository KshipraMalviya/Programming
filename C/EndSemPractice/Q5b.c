#include<stdio.h>

int main()
{
    for(int x=1; x<=5; x++)
    {
        for(int y=1; y<=6-x; y++)
        {
            printf("%d",y);
        }
        for(int y=7-x ; y<=5; y++)
        {
            printf(" ");
        }
        for(int y=1; y<=x-2; y++)
        {
            printf(" ");
        }
        for(int y=6-x; y>=1; y--)
        {
            if(!(x==1 && y==5))
            {
                printf("%d",y);
            }
        }
        printf("\n");
    }

    return 0;
}