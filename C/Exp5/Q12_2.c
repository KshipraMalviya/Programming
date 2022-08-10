#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter size of matrix\n");
    scanf("%d%d",&r,&c);
    int ar[r][c];
    printf("Enter elements\n");
    for(int x=0; x<r; x++)
    {
        for(int y=0; y<c; y++)
        {
            scanf("%d",&ar[x][y]);
        }
    }

    printf("\nOriginal Matrix\n\n");
    for(int x=0; x<r; x++)
    {
        for(int y=0; y<c; y++)
        {
            printf("%d\t",ar[x][y]);
        }
        printf("\n");
    }

    printf("\nTranpose of the Original Matrix\n\n");
    for(int x=0; x<c; x++)
    {
        for(int y=0; y<r; y++)
        {
            printf("%d\t",ar[y][x]);
        }
        printf("\n");
    }

    return 0;
}