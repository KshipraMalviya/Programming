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
    for(int x=1; x<n; x++)
    {
        int y=x-1;
        int i=x;
        int t=ar[x];
        while(y>=0 && ar[y]>t)
        {
            ar[i--]=ar[y--];
        }
        ar[i]=t;
    }
    printf("Sorted Array\n");
    for(int x=0; x<n; x++)
    {
        printf("%d\n",ar[x]);
    }

    return 0;
}