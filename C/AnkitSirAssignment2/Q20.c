#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter x co-ordinate : ");
    scanf("%d",&x);
    printf("Enter y co-ordinate : ");
    scanf("%d",&y);

    if(x>0 && y>0)
    {
        printf("1st Quadrant\n");
    }
    else if(x<0 && y>0)
    {
        printf("2nd Quadrant\n");
    }
    else if(x<0 && y<0)
    {
        printf("3rd Quadrant\n");
    }
    else if(x>0 && y<0)
    {
        printf("4th Quadrant\n");
    }
    else  // (x==0 && y==0)
    {
        printf("Origin\n");
    }

    return 0;
}