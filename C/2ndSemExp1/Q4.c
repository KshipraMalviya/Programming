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
    int big=ar[0];
    for(int x=1; x<n; x++)
    {
        if(big<ar[x])
        {
            big=ar[x];
        }
    }
    printf("Largest element in the array = %d",big);

    return 0;
}