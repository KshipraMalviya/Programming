#include<stdio.h>
#include<math.h>

void findRoots(int a,int b, int c)
{
    int dis=b*b-4*a*c;
    if(dis<0)
    {
        printf("Roots are imaginary \n");
        printf("%f + i %f\n",-1*b/(2.0*a),sqrt(-1*dis)/(2.0*a));
        printf("%f - i %f",-1*b/(2.0*a),sqrt(-1*dis)/(2.0*a));
    }
    else
    {
        float x1=-1*b/(2.0*a)+sqrt(dis)/(2.0*a);
        float x2=-1*b/(2.0*a)-sqrt(dis)/(2.0*a);
        printf("Roots are real \n");
        printf("%f, %f",x1,x2);
    }
}

int main()
{
    int a,b,c;
    printf("Enter values of a,b and c (ax^2 + bx +c)\n");
    scanf("%d%d%d",&a,&b,&c);

    findRoots(a,b,c);
}