#include<stdio.h>
#include <stdlib.h>
 
void swap(int ar[],int i,int j)
{
    int t=ar[i];
    ar[i]=ar[j];
    ar[j]=t;
}

// This function takes last element as pivot
int partition(int ar[], int l, int r)
{
    int pivot=ar[r];
    int i=l-1;
    for(int j=l; j<r; j++)
    {
        if(ar[j]<pivot)
        {
            i++;
            swap(ar,i,j);
        }
    }
    swap(ar,i+1,r);
    return i+1;
}
 
// Generates Random Pivot
int partition_r(int arr[], int low, int high)
{
    int random = low + rand() % (high - low);
    swap(arr,arr[random], arr[low]);
 
    return partition(arr, low, high);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition_r(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi + 1, high);
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