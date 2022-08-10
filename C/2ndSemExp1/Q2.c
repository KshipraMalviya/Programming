#include<stdio.h>

int isPalin(int n)
{
    int r=0;
    int t=n;
    while(t!=0)
    {
        int d=t%10;
        r=r*10+d;
        t=t/10;
    }
    if(r==n) return 1;
    else return 0;
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(isPalin(n)==1) printf("Palindrome");
    else printf("Not palindrome");

    return 0;
}