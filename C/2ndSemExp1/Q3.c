#include<stdio.h>

int isPrime(int n)
{
    if(n==1) return 0;
    for(int x=2; x<=n/2; x++)
    {
        if(n%x==0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(isPrime(n)==1) printf("Prime");
    else printf("Not prime");

    return 0;
}