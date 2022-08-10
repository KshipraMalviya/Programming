#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Table of %d\n",n);
    for(int x=1; x<=10; x++)
    {
        printf("%d x %d = %d\n",n,x,n*x);
    }

    return 0;
}