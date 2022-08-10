#include<stdio.h>

int main()
{
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("0\n");
    }
    else if(n==2)
    {
        printf("0\n");
        printf("1\n");
    }
    else
    {
        int a=0, b=1;
        n=n-2;
        printf("%d\n%d\n",a,b);
        while(n--)
        {
            int c=a+b;
            printf("%d\n",c);
            a=b;
            b=c;
        }
    }

    return 0;
}