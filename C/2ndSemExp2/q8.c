#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter the dimensions of the array\n");
    scanf("%d%d",&m,&n);
    int ar[m][n];
    int ans[m][n];
    printf("Enter elements in array\n");
    for(int x=0; x<m; x++)
    {
        for(int y=0; y<n; y++)
        {
            scanf("%d",&ar[x][y]);
            ans[x][n-1-y]=ar[x][y];
        }
    }
    printf("\nOriginal Matrix\n\n");
    for(int x=0; x<m; x++)
    {
        for(int y=0; y<n; y++)
        {
            printf("%d\t",ar[x][y]);
        }
        printf("\n");
    }
    printf("\nReversed Matrix\n\n");
    for(int x=0; x<m; x++)
    {
        for(int y=0; y<n; y++)
        {
            printf("%d\t",ans[x][y]);
        }
        printf("\n");
    }

    return 0;
}