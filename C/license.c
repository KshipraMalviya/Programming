#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    printf("Enter age : ");
    scanf("%d",&a);
    if(a<18 || a>60)
    {
        printf("Not possible\n");
    }
    else
    {
        fflush(stdin);
        char g;
        printf("Enter gender \n'M' for male\n'F' for female\n");
        scanf("%c", &g); 
        if(g=='M')
        {
            printf("Fees = Rs 1500\n");
        }
        else if(g=='F')
        {
            printf("Fees = Rs 1000\n");
        }
        else
        {
            printf("Invalid Input\n");
        }
    }

    return 0;
}