#include <stdio.h>   // DOUBT

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

    int m=ar[0];
    for(int x=1; x<n; x++)
    {
        if(ar[x]>m)
        {
            m=ar[x];
        }
    }

    int equal=0, lesser=0, greater=0;

    for(int x=0; x<n; x++)
    {
        if(m==ar[x])
        {
            equal++;
        }
        else if(m>ar[x])
        {
            lesser++;
        }
        else
        {
            greater++;
        }
    }

    printf("Maximum value                                   = %d\n",m);
    printf("Number of times it appears                      = %d\n",equal);
    printf("Number of values lesser than the maximum value  = %d\n",lesser);
    printf("Number of values greater than the maximum value = %d\n",greater);

    return 0;
}