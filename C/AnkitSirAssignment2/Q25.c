#include<stdio.h>

int main()
{
    int a,d,n;
    printf("Enter first term : ");
    scanf("%d",&a);
    printf("Enter common difference : ");
    scanf("%d",&d);
    printf("Enter number of terms : ");
    scanf("%d",&n);
    int sum=a;
    for(int x=1; x<=n; x++)
    {
        printf("%d\n",sum);
        sum+=d;
    }

    return 0;
}