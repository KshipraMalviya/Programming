#include<stdio.h>

int main()
{
    int sum=1;
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int i=5;
    for(int x=1; x<n; x++)
    {
        sum+=i;
        i+=5;
    }
    printf("Sum = %d",sum);

    return 0;
}