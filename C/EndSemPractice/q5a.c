#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int ar[n];
    for(int x=0; x<n; x++)
    {
        scanf("%d",&ar[x]);
    }
    int Array1[n];
    int i=0;
    for(int x=0; x<n; x++)
    {
        int f=0;
        for(int y=0; y<i; y++)
        {
            if(Array1[y]==ar[x])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            Array1[i++]=ar[x];
        }
    }
    int Array2[2*i];
    for(int x=0; x<i; x++)
    {
        Array2[x]=Array1[x];
    }
    int c=0;
    for(int x=i; x<2*i; x++)
    {
        Array2[x]=2*Array1[c++];
    }
    printf("\n\nMerged Array \n\n");
    for(int x=0; x<2*i; x++)
    {
        printf("%d\n",Array2[x]);
    }

    return 0;
}