#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c;
    printf("Enter number of rows and columns\n");
    printf("Rows    : ");
    scanf("%d", &r);
    printf("Columns : ");
    scanf("%d", &c);
    int *a[r];
    for (int x = 0; x < r; x++)
    {
        a[x] = (int *)malloc(c * sizeof(int));
    }
    printf("Enter elements in the array\n");
    for (int x = 0; x < r; x++)
    {
        for (int y = 0; y < c; y++)
        {
            scanf("%d", &a[x][y]);
        }
    }

    int r2, c2;
    printf("Enter number of rows and columns\n");
    printf("Rows    : ");
    scanf("%d", &r2);
    printf("Columns : ");
    scanf("%d", &c2);
    if(c!=r2)
    {
        printf("Multiplication not possible");
        return 0;
    }
    int *b[r2];
    for (int x = 0; x < r2; x++)
    {
        b[x] = (int *)malloc(c2 * sizeof(int));
    }
    printf("Enter elements in the array\n");
    for (int x = 0; x < r2; x++)
    {
        for (int y = 0; y < c2; y++)
        {
            scanf("%d", &b[x][y]);
        }
    }
    int *m[r];
    for (int x = 0; x < r; x++)
    {
        m[x] = (int *)malloc(c2 * sizeof(int));
    }
    for (int x = 0; x < r; x++)
    {
        for (int y = 0; y < c2; y++)
        {
            m[x][y]=0;
        }
    }
    for (int z = 0; z < c2; z++)
    {
        for (int x = 0; x < c; x++)
        {
            for (int y = 0; y < r2; y++)
            {
                m[z][x]+=a[z][y]*b[y][x];
            }
        }
    }
    printf("\nProduct Matrix\n\n");
    for (int x = 0; x < r; x++)
    {
        for (int y = 0; y < c2; y++)
        {
            printf("%d\t", m[x][y]);
        }
        printf("\n");
    }

    return 0;
}