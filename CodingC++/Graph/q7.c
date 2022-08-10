#include<stdio.h>

int main()
{
    int ar[]={6,5,7,4,8,3,2,9,0,1};
    int n;
    printf("Enter the element to be searched : ");
    scanf("%d", &n);
    int s=sizeof(ar)/sizeof(ar[0]);
    int flag=0;
    for(int x=0; x<s; x++)
    {
        if(ar[x]==n)
        {
            flag=1;
            printf("Found at index %d\n",x);
            break;
        }
    }
    if(flag==0)
    {
        printf("Not found\n");
    }

    return 0;
}