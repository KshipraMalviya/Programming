#include<stdio.h>

int main()
{
    int n;
    printf("Enter a three digit number : ");
    scanf("%d",&n);
    int t=n;
    int r=0;
    while(n!=0)
    {
        int d=n%10;
        r=r*10+d;
        n=n/10;
    }
    printf("Reverse of %d is %d.",t,r);

    return 0;
}