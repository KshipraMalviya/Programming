#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter numbers\n");
    int ar[n];
    for(int x=0; x<n; x++)
    {
        scanf("%d",&ar[x]);
    }
    int minimum=ar[0];
    int maximum=ar[0];
    for(int x=1; x<n; x++)
    {
        if(minimum>ar[x])
        {
            minimum=ar[x];
        }
        if(maximum<ar[x])
        {
            maximum=ar[x];
        }
    }
    printf("Maximum = %d\n",maximum);
    printf("Minimum = %d\n",minimum);

    return 0;
}