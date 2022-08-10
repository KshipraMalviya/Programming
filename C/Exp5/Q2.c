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

    int neg=0, even=0, odd=0;
    for(int x=0; x<n; x++)
    {
        if(ar[x]<0)
        {
            neg++;
        }
        if(ar[x]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Number of negative numbers = %d\n",neg);
    printf("Number of even numbers     = %d\n",even);
    printf("Number of odd numbers      = %d\n",odd);

    return 0;
}