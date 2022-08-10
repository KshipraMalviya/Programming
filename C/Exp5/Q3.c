#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter numbers\n");
    int ar[n];
    for(int x=0; x<n; x++)
    {
        scanf("%d",&ar[x]);
    }

    int sumOdd=0;
    for(int x=1; x<n; x+=2)
    {
        sumOdd+=ar[x];
    }
    
    int sumEven=0;
    for(int x=0; x<n; x+=2)
    {
        sumEven+=ar[x];
    }

    printf("Sum of  odd positioned (odd index) elements = %d\n",sumOdd);
    printf("Sum of even positioned elements (even index) = %d\n",sumEven);

    return 0;
}