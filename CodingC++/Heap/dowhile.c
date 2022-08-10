#include<stdio.h>

int main()
{
    int n;
    printf("Enter  numbers\n");
    int sum=0;
    int i=1;
    do
    {
        scanf("%d",&n);
        if(n==-1)
        {
            break;
        }
        sum+=n;
        
    } while (i==1);
    printf("Sum = : %d",sum);

    return 0;
}