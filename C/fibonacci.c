#include<stdio.h> 

int main()
{
    int a=1;
    int b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    for(int x=3; x<=10; x++)
    {
        int t=b;   
        b=a+b; 
        a=t; 
        printf("%d\n",b);
    }

    return 0;
}