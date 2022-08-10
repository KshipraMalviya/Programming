#include<stdio.h>

int main()
{
    int ar[]={0,1,2,3,4,5,6,7,8,9};
    int n;
    printf("Enter the number to be searched : ");
    scanf("%d",&n);
    int s=sizeof(ar)/sizeof(ar[0]);
    int min=0,max=s-1;
    int found=0;
    while(min<=max)
    {
        int mid=(max+min)/2;
        if(ar[mid]==n)
        {
            found=1;
            printf("Found at %d",mid);
            break;
        }
        else if(ar[mid]>n)
        {
            max=mid-1;
        }
        else
        {
            min=mid+1;
        }
    }
    if(!found)
    {
        printf("Not found\n");
    }

    return 0;
}