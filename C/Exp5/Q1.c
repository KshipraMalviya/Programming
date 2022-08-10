#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter numbers\n");
    int ar[n];
    int sum=0;
    for(int x=0; x<n; x++)
    {
        scanf("%d",&ar[x]);
        sum+=ar[x];
    }

    float avg=(float)sum/n;
    printf("Average = %f",avg);

    return 0;
}