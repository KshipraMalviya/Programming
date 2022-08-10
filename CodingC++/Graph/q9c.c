#include<stdio.h>



void msort(int ar[],int st,int en)
{
    if(st<en)
    {
        int mid=(st+en)/2;
        msort(ar,st,mid);
        msort(ar,mid+1,en);

        merge(ar,st,mid,en);
    }
}

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
    msort(ar,0,n-1);
    for(int x=0; x<n; x++)
    {
        printf("%d",ar[x]);
    }

    return 0;
}