#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    if(a>b)
    {
        printf("Bigger number is %d", a);
    }
    if(a<b)
    {
        printf("Bigger number is %d", b);
    }

    return 0;
}