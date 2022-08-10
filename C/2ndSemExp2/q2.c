#include<stdio.h>

void swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}

int main()
{
    int n;
    printf("Enter size of the arrays\n");
    scanf("%d",&n);
    int ar1[n];
    int ar2[n];
    printf("Enter elements in array1\n");
    for(int x=0; x<n; x++)
    {
        scanf("%d",&ar1[x]);
    }
    printf("Enter elements in array2\n");
    for(int x=0; x<n; x++)
    {
        scanf("%d",&ar2[x]);
    }
    for(int x=0; x<n; x++)
    {
        swap(&ar1[x],&ar2[x]);
    }
    printf("\nAfter Swapping\n\n");
    printf("Elements of array1\n");
    for(int x=0; x<n; x++)
    {
        printf("%d\n",ar1[x]);
    }
    printf("Elements of array2\n");
    for(int x=0; x<n; x++)
    {
        printf("%d\n",ar2[x]);
    }

    return 0;
}