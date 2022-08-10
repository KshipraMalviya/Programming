#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum=0;
    while(n!=0)
    {
        int d=n%10;
        sum+=d;
        n=n/10;
    }
    printf("Sum = %d",sum);

    return 0;
}