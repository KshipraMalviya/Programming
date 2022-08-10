#include<stdio.h>

int main()
{
    int marks;
    printf("Enter marks\n");
    scanf("%d",&marks);
    if(marks<50)
    {
        printf("Grade : E");
    }
    else if(marks>=50 && marks<60)
    {
        printf("Grade : D");
    }
    else if(marks>=60 && marks<70)
    {
        printf("Grade : C");
    }
    else if(marks>=70 && marks<80)
    {
        printf("Grade : B");
    }
    else if(marks>=80 && marks<90)
    {
        printf("Grade : A");
    }
    else
    {
        printf("Grade : A+");
    }

    return 0;
}