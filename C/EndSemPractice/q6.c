#include <stdio.h>

int main()
{
    int n;
    int m;
    int s;
    printf("Enter number of students\n");
    scanf("%d", &n);
    printf("Enter number of passes\n");
    scanf("%d", &m);
    printf("Enter starting seat number\n");
    scanf("%d", &s);
    int k = 0;
    int ans = 0;
    int i = s;
    for (i = s; i <= n; i++)
    {
        k++;
        if (k == m)
        {
            ans = i;
            break;
        }
        if (i == n)
        {
            i = 0;
        }
    }
    printf("%d", ans);
    return 0;
}