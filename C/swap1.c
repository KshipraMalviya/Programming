#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d%d",&a,&b);

    printf("\nBefore Swapping \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    a=a+b;
    b=a-b;  // a+b-b=a
    a=a-b;  // a+b-a=b

    printf("\nAfter Swapping \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}