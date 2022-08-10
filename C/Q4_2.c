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
    int flag = 0;
    int i = -1;
    int x=0;
    while(flag!=1 && x < n)
    {
        if (ar[x] < 0)
        {
            i = x;
            flag = 1;
        }
        x++;
    }
    if (flag==1)
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