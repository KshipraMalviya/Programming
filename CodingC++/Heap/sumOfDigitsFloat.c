#include<stdio.h>

int main()
{
    float f;
    int d;
    printf("Enter a floating point number : ");
    scanf("%f",&f);

    d=f;

    while(d!=f)
    {
        f=f*10.0;
        d=f;
    }
    printf("%d",d);
    int sum=0;
    while(d!=0)
    {
        int digit=d%10;
        sum+=digit;
        d=d/10;
    }

    printf("Sum = %d",sum);
    
    return 0;
}