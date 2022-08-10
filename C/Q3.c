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

    for(int x=0; x<n/2; x++)
    {
        printf("%d + %d = %d\n",ar[x],ar[n-1-x],ar[x]+ar[n-1-x]);
    }

    if(n%2!=0)
    {
        printf("%d\n",ar[n/2]);
    }

    return 0;
}