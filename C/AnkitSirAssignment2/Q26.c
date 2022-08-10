#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter a and b \n");
    scanf("%d%d",&a,&b);
    int p=1;
    for(int x=1; x<=b; x++)
    {
        p*=a;
    }
    printf("%d raised to %d = %d",a,b,p);

    return 0;
}