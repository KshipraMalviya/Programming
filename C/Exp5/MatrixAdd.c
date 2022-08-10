#include<stdio.h>

int main()
{
    int r1,c1;
    printf("Enter size of matrix 1\n");
    scanf("%d%d",&r1,&c1);
    int ar1[r1][c1];
    printf("Enter elements\n");
    for(int x=0; x<r1; x++)
    {
        for(int y=0; y<c1; y++)
        {
            scanf("%d",&ar1[x][y]);
        }
    }

    int r2,c2;
    printf("Enter size of matrix 2\n");
    scanf("%d%d",&r2,&c2);
    int ar2[r2][c2];
    printf("Enter elements\n");
    for(int x=0; x<r2; x++)
    {
        for(int y=0; y<c2; y++)
        {
            scanf("%d",&ar2[x][y]);
        }
    }
    if(r1==r2 && c1==c2)
    {
        printf("\nAddition of the matrices\n\n");
        int ar3[r1][c1];
        for(int x=0; x<r1; x++)
        {
            for(int y=0; y<c1; y++)
            {
                ar3[x][y]=ar1[x][y]+ar2[x][y];
                printf("%d\t",ar3[x][y]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrices are not addition-compatible\n");
    }

    return 0;
}