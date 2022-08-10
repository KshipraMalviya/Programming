#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the biggest number\n",a);
        }
        else
        {
            printf("%d is the biggest number\n",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is the biggest number\n",b);
        }
        else
        {
            printf("%d is the biggest number\n",c);
        }
    }

    return 0;
}