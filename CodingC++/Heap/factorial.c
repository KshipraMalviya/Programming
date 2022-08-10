#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Factorial = 1");
    }
    else if(n<0)
    {
        printf("Factorial = 0");
    }
    else
    {
        int fact=1;
        for(int x=n; x>=1; x--)
        {
            fact*=x;
        }
        printf("Factorial = %d",fact);
    }

    return 0;
}