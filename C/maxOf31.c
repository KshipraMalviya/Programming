#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a==b && b==c)
    {
        printf("Equal");
    }
    else if(a==b && a>c)
    {
        printf("%d is the biggest number", a);
    }
    else if(a==b && a<c)
    {
        printf("%d is the biggest number", c);
    }
    else if(b==c && b>a)
    {
        printf("%d is the biggest number", c);
    }
    else if(b==c && b<a)
    {
            printf("%d is the biggest number", a);
    }
    else if(a==c && a>b)
    {
        printf("%d is the biggest number", a);
    }
    else if(a==c && a<b)
    {
        printf("%d is the biggest number", b);
    }
    else if(a>b && a>c)
    {
        printf("%d is the biggest number", a);
    }
    else if(b>c && b>a)
    {
        printf("%d is the biggest number", b);
    }
    else
    {
            printf("%d is the biggest number", c);
    }
    return 0;
}