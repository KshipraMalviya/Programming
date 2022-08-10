#include<stdio.h>

int fact(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}

int main()
{
    int n,r;
    printf("Enter values of n and r\n");
    scanf("%d%d",&n,&r);
    int ncr=fact(n)/(fact(r)*fact(n-r));
    printf("%dC%d = %d",n,r,ncr);

    return 0;
}