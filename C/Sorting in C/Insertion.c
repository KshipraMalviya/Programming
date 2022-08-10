#include<stdio.h>

void printArray(int ar[],int n)
{
    for(int x=0; x<n; x++)
    {
        printf("%d\n",ar[x]);
    }
}

void insertionSort(int ar[],int n)
{
    for(int x=1; x<n; x++)
    {
        int current=ar[x];
        int y=x-1;
        while(ar[y]<current && y>=0)
        {
            ar[y+1]=ar[y];
            y--;
        }
        ar[y+1]=current;
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
    insertionSort(ar,n);

    return 0;
}