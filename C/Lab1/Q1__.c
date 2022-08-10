#include<stdio.h>

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    
    for(int x=n; x>1; x--)
    {
        for(int y=n;y>=1;y--)
        {
            if(y>x)
            {
                printf("%d ", y);
            }
            else 
            {
                printf("%d ", x);
            }
        }
        for(int y=2;y<=n;y++)
        {
            if(y>x) 
            {
                printf("%d ", y);
            }
            else 
            {
                printf("%d ", x);
            }
        }
        printf("\n");
    }    
    for(int x=1; x<=n; x++)
    {
        for(int y=n;y>=1;y--)
        {
            if(y>x) 
            {
                printf("%d ", y);
            }
            else 
            {
                printf("%d ", x);
            }
        }
        for(int y=2;y<=n;y++)
        {
            if(y>x) 
            {
                printf("%d ", y);
            }
            else 
            {
                printf("%d ", x);
            }
        }
        printf("\n");
    }
    
    return 0;
}