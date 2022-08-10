#include<stdio.h>

void swap(int ar[],int i,int j)
{
    int t=ar[i];
    ar[i]=ar[j];
    ar[j]=t;
}

int partition(int ar[], int l, int r)
{
    int pivot=ar[r];
    int i=l-1;
    for(int j=l; j<r; j++)
    {
        if(ar[j]>pivot)
        {
            i++;
            swap(ar,i,j);
        }
    }
    swap(ar,i+1,r);
    return i+1;
}

void quickSort(int ar[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(ar,l,r);

        quickSort(ar,l,pi-1);
        quickSort(ar,pi+1,r);
    }
}

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
    quickSort(ar,0,n-1);
    printf("Sorted Array\n");
    for(int x=0; x<n; x++)
    {
        printf("%d\n",ar[x]);
    }
}