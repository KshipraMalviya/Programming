#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    int ar[n];
    int present[n+1];
    for(int x=0; x<n+1; x++)
    {
        present[x]=0;
    }
    printf("Enter elements in the array\n");
    for(int x=0; x<n; x++)
    {
        scanf("%d",&ar[x]);
        if(ar[x]<n)
        {
            present[ar[x]]=1;
        }
    }
    printf("Missing numbers in the array\n");
    for(int x=1; x<=n; x++)
    {
        if(present[x]==0) printf("%d\n",x);
    }

    return 0;
}