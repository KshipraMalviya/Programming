#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements in the array\n");
    for(int x=0; x<n; x++)
    {
        scanf("%d",&ar[x]);
    }
    printf("Enter the element to be searched\n");
    int num;
    scanf("%d",&num);
    int i=-1;
    for(int x=0; x<n; x++)
    {
        if(ar[x]==num)
        {
            i=x;
            break;
        }
    }
    if(i==-1)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Found at index : %d",i);
    }

    return 0;
}