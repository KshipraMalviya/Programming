#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers\n");    // FOR 3 DISTINCT NUMBERS
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("%d is the biggest number\n",a);
    }
    else
    {
        if(b>c && b>a)
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