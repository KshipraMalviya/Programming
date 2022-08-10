#include<stdio.h>

int main()
{
    int sum=0;
    for(int x=1; x<=100; x++)
    {
        int n;
        printf("Enter marks of student %d : ",x);
        scanf("%d",&n);
        sum+=n;
    }
    printf("Sum = %d",sum);

    return 0;
}