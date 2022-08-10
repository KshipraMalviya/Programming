#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements in array 1 : ");
    scanf("%d", &n);
    printf("Enter numbers\n");
    int ar[n];
    for (int x = 0; x < n; x++)
    {
        scanf("%d", &ar[x]);
    }

    int big=ar[0];
    int small=ar[0];
    for(int x=1; x<n; x++)
    {
        if(ar[x]>big)
        {
            big=ar[x];
        }
        if(ar[x]<small)
        {
            small=ar[x];
        }
    }
    for(int x=1; x<n; x++)
    {
        if(ar[x]>small && ar[x]!=big)
        {
            small=ar[x];
        }
    }
    printf("Second biggest element = %d",small);

    return 0;
}