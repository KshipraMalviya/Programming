#include<stdio.h>

int main()
{
    for(int x=0; x<3; x++)
    {
        for(int y=1; y>=x; y--)
        {
            printf(" ");
        }
        int i=(x*(x+1)/2)+1;
        for(int y=0; y<=x; y++)
        {
            printf("%d",i);
            i++;
        }
        i=(x*(x+1)+1)/2+x;
        for(int y=1; y<=x; y++)
        {
            printf("%d",i);
            i--;
        }
        printf("\n");
    }

    return 0;
}