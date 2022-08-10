#include<stdio.h>

int main()
{
    int sum=0;
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int i=2;
    for(int x=1; x<=n; x++)
    {
        sum+=i;
        i*=2;
    }
    printf("Sum = %d",sum);

    return 0;
}