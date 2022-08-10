#include<stdio.h>

int main()
{
    int n;
    printf("Enter numbers\n");
    scanf("%d",&n);
    int sum=0;
    while(n!=-1)
    {
        sum+=n;
        scanf("%d",&n);
    }
    printf("Sum = %d",sum);

    return 0;
}