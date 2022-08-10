#include<stdio.h>
#include<math.h>

int main()
{
    printf("Enter coefficients a, b and c of quadratic equation (ax^2+bx+c)\n\n");
    double a,b,c;
    printf("a : ");
    scanf("%lf",&a);
    printf("b : ");
    scanf("%lf",&b);
    printf("c : ");
    scanf("%lf",&c);
    double d=b*b-4.0*a*c;
    if(d>=0)   // REAL ROOTS
    {
        double x1=(-b+sqrt(d))/(2.0*a);
        double x2=(-b-sqrt(d))/(2.0*a);
        printf("Real Roots = %lf , %lf",x1,x2);
    }
    else  // IMAGINARY ROOTS
    {

        printf("Imaginary Roots : ");
        printf("%lf + i%lf , ",-(b/(2.0*a)),sqrt(-d)/(2*a));
        printf("%lf - i%lf",-(b/(2.0*a)),sqrt(-d)/(2*a));
    }

    return 0;
}