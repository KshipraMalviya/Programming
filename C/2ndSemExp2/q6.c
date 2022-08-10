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
    int count=0;
    if(ar[0]!=ar[1])
    {
        count++;
    }
    for(int x=1; x<n-1; x++)
    {
        if(ar[x-1]!=ar[x] && ar[x]!=ar[x+1])
        {
            count++;
        }
    }
    if(ar[n-2]!=ar[n-1])
    {
        count++;
    }
    printf("Number of non repeated elements = %d", count);

    return 0;
}