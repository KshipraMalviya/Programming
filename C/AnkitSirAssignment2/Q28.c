#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int prime=1;
    for(int x=2; x<=n/2; x++)
    {
        if(n%x==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==1 && n!=1)
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not a prime number\n");
    }

    return 0;
}