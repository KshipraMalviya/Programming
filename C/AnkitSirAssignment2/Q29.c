#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int t=n;
    int r=0;
    while(n!=0)
    {
        int d=n%10;
        r=r*10+d;
        n=n/10;
    }

    if(r==t)
    {
        printf("Reverse of the number IS EQUAL to the number itself.");
    }
    else
    {
        printf("Reverse of the number IS NOT EQUAL to the number itself.");
    }

    return 0;
}