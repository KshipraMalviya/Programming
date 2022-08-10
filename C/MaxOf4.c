#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter four numbers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<b)
    {
        if(b<c)
        {
            if(c<d)  // a<b<c<d  
            {
                printf("Maximum = %d",d);
            }
            else //a<b<c and d<c   
            {
                printf("Maximum = %d",c);
            }
        }
        else    // a<b and c<b  
        {
            if(b>d)
            {
                printf("Maximum = %d",b);
            }
            else
            {
                printf("Maximum = %d",d);
            }
        }
    }
    else  //b<a
    {
        if(a<c)   // b<a<c
        {
            if(c<d)  // b<a<c<d      
            {
                printf("Maximum = %d",d);
            }
            else  // b<a<c and d<c   
            {
                printf("Maximum = %d",c);
            }
        }
        else  // c<a and b<a       
        {
            if(a<d)
            {
                printf("Maximum = %d",d);
            }
            else
            {
                printf("Maximum = %d",a);
            }
        }
    }

    return 0;
}