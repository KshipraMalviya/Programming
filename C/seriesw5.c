#include<stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int i=1;
    int sum=0;
    int x=1;
    while(x<=n)
    {
        if(x%2==0)
        {
            sum-=i;
        }
        else
        {
            sum+=i;
        }
        i=i+2;
        x++;
    }
    printf("Sum = %d",sum);

    return 0;
}