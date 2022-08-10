#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter dimensions of the character array\n");
    scanf("%d%d",&r,&c);
    char ar[r][c];
    printf("Enter characters in the array\n");
    for(int x=0; x<r; x++)
    {
        for(int y=0; y<c; y++)
        {
            scanf("%c",&ar[x][y]);
        }
    }

    return 0;
}