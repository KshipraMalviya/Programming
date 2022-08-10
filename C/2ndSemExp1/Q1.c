#include<stdio.h>

int fact(int n)
{
    if(n<0) return 0;
    if(n==0) return 1;
    return n*fact(n-1);
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int f=fact(n);
    printf("Factorial = %d",f);

    return 0;
}