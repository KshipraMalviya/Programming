#include<stdio.h>

void printArray(int ar[],int n)
{
    for(int x=0; x<n; x++)
    {
        printf("%d\n",ar[x]);
    }
}

void selectionSort(int ar[],int n)
{
    for(int x=0; x<n-1; x++)
    {
        int i=x;
        for(int y=x+1; y<n; y++)
        {
            if(ar[i]<ar[y])
            {
                i=y;
            }
        }
        int t=ar[i];
        ar[i]=ar[x];
        ar[x]=t;
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
    selectionSort(ar,n);

    return 0;
}