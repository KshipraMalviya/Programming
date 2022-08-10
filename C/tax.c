#include<stdio.h>

int main()
{
    int salary;
    printf("Enter salary : Rs ");
    scanf("%d",&salary);
    float tax=(salary>100000)?(salary*10/100.0):0;
    printf("Tax = Rs %f",tax);

    return 0;
}