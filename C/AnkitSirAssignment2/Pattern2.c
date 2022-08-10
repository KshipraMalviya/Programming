#include<stdio.h>

int main()
{
    for(int x=1; x<=5; x++)
    {
        for(int y=1; y<=x; y++)
        {
            if((x+y)%2==0)
            {
                printf("A ");
            }
            else
            {
                printf("B ");
            }
        }
        printf("\n");
    }

    return 0;
}