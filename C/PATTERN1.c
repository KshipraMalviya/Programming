#include<stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=2*n-1; y++)
        {
            if(x+y<=n)
            {
                printf(" ");
            }
            else if(y<=n)
            {
                printf("%d",x+y-n);
            }
            else if(y<=x+n-1)
            {
                printf("%d",n-y+x);
            }
        }
        printf("\n");
    }

    return 0;
}