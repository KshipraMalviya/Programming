#include <stdio.h>

void TowerOfHanoi(int n, int source, int helper, int destination)
{
    if (n == 1)
        printf("Move disc 1 from rod %d to rod %d.\n", source, destination);
    else
    {
        TowerOfHanoi(n - 1, source, destination, helper);
        printf("Move disc %d from rod %d to rod %d.\n", n, source, destination);
        TowerOfHanoi(n - 1, helper, source, destination);
    }
}

int main()
{
    printf("Enter the number of disk : ");
    int n;
    scanf("%d", &n);
    TowerOfHanoi(n, 1, 2, 3);

    return 0;
}