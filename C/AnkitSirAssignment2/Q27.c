#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Fcatorial of 0 is 1.\n");
        return 0;
    }
    if(n<0)
    {
        printf("Factorial of %d is 0.\n",n);
        return 0;
    }
    int p=1;
    for(int x=n; x>=1; x--)
    {
        p*=x;
    }
    printf("Factorial of %d is %d.\n",n,p);

    return 0;
}