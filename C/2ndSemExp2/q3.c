#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements in the array\n");
    for(int x=0; x<n; x++)
    {
        scanf("%d",&ar[x]);
    }
    for(int x=0; x<n/2; x++)
    {
        int t=ar[x];
        ar[x]=ar[n-1-x];
        ar[n-1-x]=t;
    }

    printf("Reversed Array\n");
    for(int x=0; x<n; x++)
    {
        printf("%d\n",ar[x]);
    }

    return 0;
}