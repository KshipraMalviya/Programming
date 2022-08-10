#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d x %d = %d\n",a,b,a*b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d modulo %d = %d",a,b,a%b);

    return 0;
}