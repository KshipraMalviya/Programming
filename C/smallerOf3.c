#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(b<c)
        {
            printf("%d is the smallest",a);
        }
        else   // c<b
        {
            if(a<c)
            {
                printf("%d is the smallest",a);
            }
            else
            {
                printf("%d is the smallest",c);
            }
        }
    }
    else  // b<a
    {
        if(a<c)
        {
            printf("%d is the smallest",b);
        }
        else  // c<a
        {
            if(b<c)
            {
                printf("%d is the smallest",b);
            }
            else
            {
                printf("%d is the smallest",c);
            }
        }
    }

    return 0;
}