#include <stdio.h>

int findMax(int arr[])
{
    int max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void main()
{
    int arr[10], n;
    printf("Enter 10 elements.\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m = findMax(arr);
    printf("Maximum element of array: %d", m);
}