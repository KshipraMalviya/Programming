#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    printf("Enter numbers\n");
    int ar[n];
    for (int x = 0; x < n; x++)
    {
        scanf("%d", &ar[x]);
    }
    int i = -1;
    for (int x = n-1; x>=0; x--)
    {
        if (ar[x] < 0)
        {
            i = x;
        }
    }
    if (i != -1)
    {
        int sum = 0;
        for (int x = i; x < n; x++)
        {
            sum += ar[x];
        }

        printf("Sum = %d", sum);
    }
    else
    {
        printf("No negative number found\n");
    }

    return 0;
}