#include<stdio.h>

int main()
{
    int ar[]={0,0,0,0,0,0,0,0,0,0};
    printf("Enter numbers\n");
    int n;
    do
    {
        scanf("%d",&n);
        if(n!=-1)
        {
            if(n==0) ar[0]++;
            while(n!=0)
            {
                int d=n%10;
                ar[d]++;
                n=n/10;
            }
        }
        
    } while (n!=-1);
    printf("Number\tFrequency\n\n");
    for(int x=0; x<=9; x++)
    {
        printf("%d\t%d\n",x,ar[x]);
    }

    return 0;
}