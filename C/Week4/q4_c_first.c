#include <stdio.h>

int partition(int a[], int start, int end)
{
    int pivot = a[start], p1 = start + 1, i, temp;

    for (i = start + 1; i <= end; i++)
    {

        if (a[i] < pivot)
        {
            if (i != p1)
            {
                temp = a[p1];
                a[p1] = a[i];
                a[i] = temp;
            }
            p1++;
        }
    }

    a[start] = a[p1 - 1];
    a[p1 - 1] = pivot;

    return p1 - 1;
}

void quickSort(int ar[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(ar, l, r);

        quickSort(ar, l, pi - 1);
        quickSort(ar, pi + 1, r);
    }
}

int main()
{
    int n;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    int ar[n];
    printf("Enter elements in the array\n");
    for (int x = 0; x < n; x++)
    {
        scanf("%d", &ar[x]);
    }
    quickSort(ar, 0, n - 1);
    printf("Sorted Array\n");
    for (int x = 0; x < n; x++)
    {
        printf("%d\n", ar[x]);
    }
}