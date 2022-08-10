#include<stdio.h>

int main()
{
    printf("Enter number of elements : ");
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int x=0; x<n; x++)
    {
        scanf("%d",&ar[x]);
    }
    for(int x=0; x<n-1; x++)
    {
        for(int y=0; y<n-1; y++)
        {
            if(ar[y]>ar[y+1])
            {
                int t=ar[y];
                ar[y]=ar[y+1];
                ar[y+1]=t;
            }
        }
    }
    printf("\nArray after sorting\n");
    for(int x=0; x<n; x++)
    {
        printf("%d ",ar[x]);
    }

    return 0;
}