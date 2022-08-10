#include<stdio.h>
#include<math.h>

int main()
{
    printf("Menu\n");
    printf("1 - Triangle\n");
    printf("2 - Square\n");
    printf("3 - Circle\n");

    printf("Enter your choice\n");
    int c;
    scanf("%d", &c);
    int a,b,k;

    switch(c)
    {
        case 1:
        
        printf("Enter sides of triangle\n");
        scanf("%d%d%d", &a, &b, &k);
        float s=(a+b+k)/2.0;
        float area=sqrt(s*(s-a)*(s-b)*(s-k));
        printf("Area of triangle = %f\n",area);
        printf("Perimeter of triangle = %d\n", (a+b+k));
        break;

        case 2:
        
        printf("Enter side of square\n");
        scanf("%d", &a);
        printf("Area of square = %d\n",(a*a));
        printf("Perimeter of square = %d\n",(4*a));
        break;

        case 3:
        
        printf("Enter radius of circle\n");
        scanf("%d", &a);
        printf("Area of circle = %f\n",(3.14*a*a));
        printf("Perimeter of circle = %f\n",(2*3.14*a));
        break;

        default :
        printf("Invalid Input");
    }


    return 0;
}