#include<stdio.h>

int main()
{
    int i=0;
    for(int x=1; x<=5; x++)
    {
        for(int y=1; y<=x; y++)
        {
            printf("%c ",(i+65));
            i++;
        }
        printf("\n");
    }

    return 0;
}