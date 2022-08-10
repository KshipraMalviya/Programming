#include<stdio.h>  // DOUBT IN THIS QUESTION

int main()
{
    int m;
    printf("Enter marks : ");
    scanf("%d",&m);
    if(m>75)
    {
        printf("Passed with honour\n");
    }
    else if(m>60)
    {
        printf("Passed with 1st division\n");
    }
    else if(m>45)
    {
        printf("Passed with 2nd division\n");
    }
    else if(m>30)
    {
        printf("Passed with 3rd division\n");
    }
    else
    {
        printf("Failed");
    }

    return 0;
}