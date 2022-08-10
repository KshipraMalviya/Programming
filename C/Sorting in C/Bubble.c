#include<stdio.h>

void printArray(int ar[],int n)
{
    for(int x=0; x<n; x++)
    {
        printf("%d\n",ar[x]);
    }
}

void bubbleSort(int ar[],int n)
{
    for(int x=0; x<n-1; x++)
    {
        for(int y=0; y<n-x; y++)
        {
            if(ar[y]<ar[y+1])
            {
                int t=ar[y];
                ar[y]=ar[y+1];
                ar[y+1]=t;
            }
        }
    }
    printArray(ar,n);
}

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements\n");
    for(int x=0; x<n; x++)
    {
        scanf("%d",&ar[x]);
    }
    printf("\nArray after sorting\n\n");
    bubbleSort(ar,n);

    return 0;
}