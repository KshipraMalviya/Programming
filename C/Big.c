#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    if(a>b)
    {
        printf(" a + b = %d", (a+b));
    }
    if(a<b)
    {
        printf(" a - b = %d", (b-a));
    }
    if(a==b)
    {
        printf("Both are equal");
    }

    return 0;
}