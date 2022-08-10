#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Not A Prime Number\n");
        return 0;
    }
    int prime=1;
    for(int x=2; x<=sqrt(n); x++)
    {
        if(n%x==0)
        {
            printf("Not A Prime Number\n");
            prime=0;
            break;
        }
    }
    if(prime==1)
    {
        printf("Prime Number\n");
    }

    return 0;
}