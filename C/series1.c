#include<stdio.h>

int main()
{
    int sum=0;
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int x=1; x<=n; x++)
    {
        sum+=x;
    }
    printf("Sum = %d",sum);

    return 0;
}