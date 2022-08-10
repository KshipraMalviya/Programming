#include<stdio.h>

int main()
{
    int n;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter elements in the array in increasing order\n");
    for(int x=0; x<n; x++)
    {
        scanf("%d",&ar[x]);
    }
    printf("Enter the element to be searched\n");
    int num;
    scanf("%d",&num);
    int i=-1;
    int min=0, max=n-1;
    while(min<=max)
    {
        int mid=(min+max)/2;
        if(ar[mid]==num)
        {
            i=mid; 
            break;
        }
        else if(ar[mid]<num)
        {
            min=mid+1;
        }
        else
        {
            max=mid-1;
        }
    }
    if(i==-1)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Found at index : %d\n",i);
    }

    return 0;
}