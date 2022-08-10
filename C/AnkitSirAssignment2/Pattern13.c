#include<stdio.h>

int main()
{
    for(int x=1; x<=5; x++)
    {
        for(int y=1; y<=5-x; y++)
        {
            printf("  ");
        }
        for(int y=6-x; y<=5; y++)
        {
            printf("%c ",59+x+y);
        }
        printf("\n");
    }

    return 0;
}