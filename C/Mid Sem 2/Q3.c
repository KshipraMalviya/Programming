#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter size of array1 : ");
    scanf("%d", &m);
    printf("Enter size of array2 : ");
    scanf("%d", &n);
    int ar1[m];
    int ar2[n];
    printf("Enter elements of array1\n");
    for (int x = 0; x < m; x++)
    {
        scanf("%d", &ar1[x]);
    }
    printf("Enter elements of array2\n");
    for (int x = 0; x < n; x++)
    {
        scanf("%d", &ar2[x]);
    }
    int ar3[m + n];
    int i = 0;
    int a = 0, b = 0;
    while (a < m && b < n)
    {
        if (ar1[a] > ar2[b])
        {
            ar3[i++] = ar2[b++];
        }
        else
        {
            ar3[i++] = ar1[a++];
            if (ar1[a - 1] == ar2[b])
            {
                b++;
            }
        }
    }
    for (int x = a; x < m; x++)
    {
        ar3[i++] = ar1[x];
    }
    for (int x = b; x < n; x++)
    {
        ar3[i++] = ar2[x];
    }
    printf("Merged Array\n");
    for (int x = 0; x < i; x++)
    {
        printf("%d ", ar3[x]);
    }

    return 0;
}