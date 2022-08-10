#include<stdio.h>

int main()
{
    for(int x=1; x<=5; x++)
    {
        for(int y=1; y<=5; y++)
        {
            if(x+y>5 && (x+y)%2==0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        for(int y=6; y<=4+x; y++)
        {
            if((x+y)>=8 && (x+y)%2==0)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}