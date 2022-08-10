#include<stdio.h>

int main()
{
    for(int x=1; x<=5; x++)
    {
        for(int y=1; y<=5-x; y++)
        {
            printf(" ");
        }
        for(int y=1; y<=x; y++)
        {
            printf("%c",(char)(64+y));
        }
        for(int y=x; y>=2; y--)
        {
            printf("%c",(char)(63+y));
        }
        printf("\n");
    }

    return 0;
}