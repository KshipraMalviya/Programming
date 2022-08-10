#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && b>c)
    {
        printf("%d < %d < %d",c,b,a);
    }
    else if(c>b && b>a)
    {
        printf("%d < %d < %d",a,b,c);
    }
    else if(b>a && b>c && a<c)
    {
        printf("%d < %d < %d",a,c,b);
    }
    else if(b>a && b>c && c<a)
    {
        printf("%d < %d < %d",c,a,b);
    }
    else if(a>b && a>c && b<c)
    {
        printf("%d < %d < %d",b,c,a);
    }
    else
    {
        printf("%d < %d < %d",b,a,c);
    }

    return 0;
}
/*
abc
cba
acb
cab
bca
bac
*/