#include<stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int x=1;
    int sum=0;
    while(x<=n)
    {
        sum+=x;
        x++;
    }
    printf("Sum = %d",sum);

    return 0;
}