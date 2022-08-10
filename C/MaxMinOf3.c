#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(b>c)  
        {
            printf("Maximum = %d\n",a);
            printf("Minimum = %d\n",c);
        }
        else // a>b and b<c
        {
            if(c>a)
            {
                printf("Maximum = %d\n",c);
                printf("Minimum = %d\n",b);
            }
            else
            {
                printf("Maximum = %d\n",a);
                printf("Minimum = %d\n",b);
            }
        }
    }
    else  // b>a
    {
        if(a>c) // b>a and a>c
        {
            printf("Maximum = %d\n",b);
            printf("Minimum = %d\n",c);
        }
        else
        {
            if(c>b) // b>a and a<c
            {
                printf("Maximum = %d\n",c);
                printf("Minimum = %d\n",a);
            }
            else
            {
                printf("Maximum = %d\n",b);
                printf("Minimum = %d\n",a);
            }
        }
    }

    return 0;
}