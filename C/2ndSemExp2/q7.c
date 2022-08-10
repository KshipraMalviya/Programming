#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter size of both the arrays\n");
    scanf("%d%d",&a,&b);
    int ar1[a];
    int ar2[b];
    printf("Enter elements in the 1st array\n");
    for(int x=0; x<a; x++)
    {
        scanf("%d",&ar1[x]);
    }
    printf("Enter elements in the 2nd array\n");
    for(int x=0; x<b; x++)
    {
        scanf("%d",&ar2[x]);
    }
    int ar3[a+b];
    int i1=0;
    int i2=0;
    int i=0;
    while(i1<a && i2<b)
    {
        if(ar1[i1]<ar2[i2])
        {
            ar3[i++]=ar1[i1++];
        }
        else
        {
            ar3[i++]=ar2[i2++];
        }
    }
    while(i1<a)
    {
        ar3[i++]=ar1[i1++];
    }
    while(i2<b)
    {
        ar3[i++]=ar2[i2++];
    }

    if((a+b)%2!=0)
    {
        printf("Median = %d", ar3[(a+b)/2]);
    }
    else
    {
        int p=(a+b)/2;
        float d=(ar3[p]+ar3[p-1])/2.0;
        printf("Median = %f", d);
    }

    return 0;
}