#include<stdio.h>

void selectionSort(int ar[],int n)
{
    for(int x=0; x<n-1; x++)
    {
        int i=x;
        for(int y=x+1; y<n; y++)
        {
            if(ar[i]>ar[y])
            {
                i=y;
            }
        }
        int t=ar[i];
        ar[i]=ar[x];
        ar[x]=t;
    }
}

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int n1;
    printf("Enter number of elements : ");
    scanf("%d",&n1);

    int ar[n1];
    for(int x=0; x<n1; x++)
    {
        scanf("%d",&ar[x]);
    }
    selectionSort(ar,n1);
    printf("nth largest number = %d\n",ar[n1-n]);
    printf("nth smallest number = %d\n",ar[n-1]);
    return 0;
}