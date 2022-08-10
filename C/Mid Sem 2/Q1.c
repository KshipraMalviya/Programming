#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int ar[n];
    printf("Enter the elements\n");
    for (int x = 0; x < n; x++)
    {
        scanf("%d", &ar[x]);
    }
    int mountain = 1;
    int decision = ar[0] < ar[1] ? 0 : 1;
    int mini = ar[n - 1], maxi = ar[n - 1];
    for (int x = 0; x < n - 1; x++)
    {
        if (decision == 0)
        {
            if (ar[x] > ar[x + 1])
            {
                mountain = 0;
                break;
            }
            decision = 1 - decision;
        }
        else if (decision == 1)
        {
            if (ar[x] < ar[x + 1])
            {
                mountain = 0;
                break;
            }
            decision = 1 - decision;
        }
        mini = ar[x] < mini ? ar[x] : mini;
        maxi = ar[x] > maxi ? ar[x] : maxi;
    }
    if (mountain)
    {
        printf("It is a mountain array\n");
        printf("Difference between the highest and lowest peak = %d", maxi - mini);
    }
    else
    {
        printf("It is not a mountain array\n");
    }

    return 0;
}