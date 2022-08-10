#include <stdio.h>

void insert(int ar[], int a, int x)
{
    if (x > 0)
    {
        x--;
        int current = ar[x];
        while (current > a && x != 0)
        {
            ar[x + 1] = current;
            x--;
            current = ar[x];
        }
        if (x == 0)
        {
            if (ar[0] > a)
            {
                ar[1] = ar[0];
                ar[0] = a;
            }
            else
            {
                ar[1] = a;
            }
        }
        else
        {
            ar[x+1]=a;
        }
    }
    else
        ar[x] = a;
    for (int y = 0; y <= 9; y++)
    {
        printf("%d ", ar[y]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int ar[n];
    for (int x = 0; x < n; x++)
    {
        ar[x] = 0;
    }

    printf("Enter numbers \n ");

    for (int x = 0; x < n; x++)
    {
        int a;
        scanf("%d", &a);
        insert(ar, a, x);
    }

    return 0;
}