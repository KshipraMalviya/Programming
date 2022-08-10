#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int t=n;
    int r=0;
    while(t!=0)
    {
        int d=t%10;
        r=r*10+d;
        t=t/10;
    }
    if(r==n)
    {
        printf("Palindrome Number\n");
    }
    else
    {
        printf("Not A Palindrome Number\n");
    }

    return 0;
}