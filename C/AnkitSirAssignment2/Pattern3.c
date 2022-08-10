#include<stdio.h>

int main()
{
    int i=1;
    for(int x=1; x<=5; x++)
    {
        for(int y=1; y<=x; y++)
        {
            printf("%d ",i);
            i++;
            if(i>9)
            {
                i=0;
            }
        }
        printf("\n");
    }

    return 0;
}