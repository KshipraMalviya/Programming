#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int ar[n];
    for(int x=0; x<n; x++)
    {
        scanf("%d",&ar[x]);
    }

    for(int x=1; x<n; x++)
    {
        int current=ar[x];
        int y=x-1;
        while(ar[y]>current && y>=0)
        {
            ar[y+1]=ar[y];
            y--;
        }
        ar[y+1]=current;
    }

    printf("\nArray after sorting\n");
    for(int x=0; x<n; x++)
    {
        printf("%d ",ar[x]);
    }

    return 0;
}