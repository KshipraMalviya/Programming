#include<stdio.h>
#include<math.h>

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n<0)
    {
        return 0;
    }
    else
    {
        int fact=1;
        for(int x=n; x>=1; x--)
        {
            fact*=x;
        }
        return fact;
    }
}

int main()
{
    int x,n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Enter x : ");
    scanf("%d",&x);
    double sum=x;
    for(int i=2; i<=n; i+=2)
    {
        sum+=pow(x,i)/factorial(i);
    }
    printf("Sum of the series = %lf",sum);

    return 0;
}