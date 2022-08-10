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

    for(int x=0; x<n-1; x+=2)
    {
        printf("%d + %d = %d\n",ar[x],ar[x+1],ar[x]+ar[x+1]);
    }
    if(n%2!=0)
    {
        printf("%d + %d = %d\n",ar[n-1],ar[n-1],2*ar[n-1]);
    }

    return 0;
}