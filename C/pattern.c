#include<stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=n; y++)
        {
            if(x+y>=(n+1))
            {
                printf("%d",(x+y-n));
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}