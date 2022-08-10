#include <stdio.h>

int main()
{
    int n1;
    printf("Enter number of elements in array 1 : ");
    scanf("%d", &n1);
    printf("Enter numbers\n");
    int ar1[n1];
    for (int x = 0; x < n1; x++)
    {
        scanf("%d", &ar1[x]);
    }

    int n2;
    printf("Enter number of elements in array 2 : ");
    scanf("%d", &n2);
    printf("Enter numbers\n");
    int ar2[n2];
    for (int x = 0; x < n2; x++)
    {
        scanf("%d", &ar2[x]);
    }
    
    if (n1 == n2)
    {
        int eq = 1;
        for(int x=0; x<n2; x++)
        {
            if(ar1[x]!=ar2[x])
            {
                eq=0;
                break;
            }
        }
        if (eq)
        {
            printf("Arrays are equal\n");
        }
        else
        {
            printf("Arrays are not equal\n");
        }
    }
    else
    {
        printf("Arrays are not equal\n");
    }

    return 0;
}