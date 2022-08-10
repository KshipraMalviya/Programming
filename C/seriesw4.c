#include<stdio.h>

int main()
{
    int sum=0;
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int i=2;
    int x=1;
    while(x<=n)
    {
        sum+=i;
        i*=2;
        x++;
    }
    printf("Sum = %d",sum);

    return 0;
}