#include<stdio.h>

int main()
{
    int N;
    printf("Enter number of students : ");
    scanf("%d",&N);
    int ar[N][3];
    char sub[3][10]={"Physics","Chemistry","Maths"};
    for(int x=0; x<N; x++)
    {
        for(int y=0; y<3; y++)
        {
            printf("Enter %s Marks of Roll No. %d : ",sub[y],x);
            scanf("%d",&ar[x][y]);
        }
    }

    printf("\n\n");

    int total=0;
    for(int x=0; x<N; x++)
    {
        int sum=0;
        for(int y=0; y<3; y++)
        {
            sum+=ar[x][y];
        }
        total+=sum;
        printf("Total marks of student with roll no. %d = %d\n",x,sum);
    }

    int sump=0, sumc=0, summ=0;
    for(int x=0; x<N; x++)
    {
        sump+=ar[x][0];
    }
    printf("Average marks in physics = %f\n",(float)sump/N);
    for(int x=0; x<N; x++)
    {
        sumc+=ar[x][1];
    }
    printf("Average marks in chemistry = %f\n",(float)sumc/N);
    for(int x=0; x<N; x++)
    {
        summ+=ar[x][2];
    }
    printf("Average marks in mathematics = %f\n",(float)summ/N);

    printf("Total marks of class = %d\n",total);
    printf("Average marks of class = %f",(float)total/N);


    return 0;
}