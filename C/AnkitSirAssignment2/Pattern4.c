#include<stdio.h>

int main()
{
    for(int x=1; x<=5; x++)
    {
        for(int y=1; y<=x; y++)
        {
            printf("%c ",(y+64));
        }
        printf("\n");
    }

    return 0;
}