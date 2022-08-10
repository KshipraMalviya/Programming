// PROGRAM TO CONVERT LENTH IN CENTIMETERS TO FEET AND INCHES

#include<stdio.h>

int main()
{
    int l;
    printf("Enter length in centimeters\n");
    scanf("%d",&l);
    float f1=l/30.48;
    int f=(int)f1;
    float i=(f1-f)*12.0;
    printf("%d feet %f inch\n",f,i);

    return 0;
}