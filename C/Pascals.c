#include<stdio.h>

int fact(int n)
{
    if(n==0) return 1;
    return n*fact(n-1);
}

int nCr(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int x=0; x<n; x++)
    {
        for(int y=0; y<n-x-1; y++)
        {
            printf("\t");
        }
        for(int y=0; y<=x; y++)
        {
            printf("%d\t\t",nCr(x,y));
        }
        printf("\n");
    }

    return 0;
}