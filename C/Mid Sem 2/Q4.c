#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter size : ");
    scanf("%d",&n);
    float sum;
    for(int x=1; x<=n; x++)
    {
        int p=pow(2,x-1);
        sum+=pow(x,p)/(float)fact(2*x-2);
    }
    printf("sum = %f",sum);

    return 0;
}

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}