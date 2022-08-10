#include<stdio.h>

int main()
{
    int y;
    printf("Enter number of years : ");
    scanf("%d",&y);
    printf("Menu\n\n");
    printf("1 - Convert To Minutes\n");
    printf("2 - Convert To Hours\n");
    printf("3 - Convert To Days\n");
    printf("4 - Convert To Months\n");
    printf("5 - Convert To Seconds\n");
    printf("Enter your choice\n");
    int c;
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("%d years = %lf minutes\n",y,365.25*y*24.0*60.0);
        break;

        case 2:
        printf("%d years = %lf hours\n",y,365.25*y*24.0);
        break;

        case 3:
        printf("%d years = %lf days\n",y,365.25*y);
        break;

        case 4:
        printf("%d years = %lf months\n",y,12.0*y);
        break;

        case 5:
        printf("%d years = %lf seconds\n",y,365.25*y*24.0*60.0*60.0);
        break;

        default:
        printf("Invalid Input\n");
    }
    
    return 0;
}