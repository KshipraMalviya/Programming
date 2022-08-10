#include<stdio.h>

int main()
{
    int x1,y1;
    printf("Enter numbers of rows in matrix 1   : ");
    scanf("%d",&x1);
    printf("Enter number of columns in matrix 1 : ");
    scanf("%d",&y1);
    int x2,y2;
    printf("Enter numbers of rows in matrix 2   : ");
    scanf("%d",&x2);
    printf("Enter number of columns in matrix 2 : ");
    scanf("%d",&y2);
    if(y1!=x2)
    {
        printf("Matrices can not be multiplied\n");
        return 0;
    }
    int ar1[x1][y1];
    printf("Enter elements of matrix 1\n");
    for(int x=0; x<x1; x++)
    {
        for(int y=0; y<y1; y++)
        {
            scanf("%d",&ar1[x][y]);
        }
    }
    int ar2[x2][y2];
    printf("Enter elements of matrix 2\n");
    for(int x=0; x<x2; x++)
    {
        for(int y=0; y<y2; y++)
        {
            scanf("%d",&ar2[x][y]);
        }
    }
    int ar3[x1][y2];
    for(int x=0; x<x1; x++)
    {
        for(int y=0; y<y2; y++)
        {
            ar3[x][y]=0;
        }
    }
    for(int x=0; x<x1; x++)
    {
        for(int y=0; y<y2; y++)
        {
            for(int z=0; z<y1; z++)
            {
                ar3[x][y]+=ar1[x][z]*ar2[z][y];
            }
        }
    }
    printf("\nProduct Matrix\n\n");
    for(int x=0; x<x1; x++)
    {
        for(int y=0; y<y2; y++)
        {
            printf("%d  ",ar3[x][y]);
        }
        printf("\n");
    }

    return 0;
}