#include<stdio.h>

void swap(int *a,int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}

int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before Swapping\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    swap(&a,&b);
    printf("After Swapping\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}