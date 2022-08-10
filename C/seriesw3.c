#include<stdio.h>

int main()
{
    int sum=1;
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int i=5;
    int x=1;
    while(x<n)
    {
        sum+=i;
        i+=5;
        x++;
    }
    printf("Sum = %d",sum);

    return 0;
}