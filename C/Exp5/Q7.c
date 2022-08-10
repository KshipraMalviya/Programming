#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);

    int p[n];
    int c[n];
    int m[n];

    for(int x=0; x<n; x++)
    {
        printf("Enter marks in physics of student %d     : ",(x+1));
        scanf("%d",&p[x]);
        printf("Enter marks in chemistry of student %d   : ",(x+1));
        scanf("%d",&c[x]);
        printf("Enter marks in mathematics of student %d : ",(x+1));
        scanf("%d",&m[x]);
    }

    int ip=0,ic=0,im=0;
    int hp=p[0],hc=c[0],hm=m[0];
    for(int x=1; x<n; x++)
    {
        if(hp<p[x])
        {
            ip=x;
            hp=p[x];
        }
        if(hc<c[x])
        {
            ic=x;
            hc=c[x];
        }
        if(hm<m[x])
        {
            im=x;
            hm=m[x];
        }
    }

    int sump=p[ip]+c[ip]+m[ip];
    int sumc=p[ic]+c[ic]+m[ic];
    int summ=p[im]+c[im]+m[im];

    printf("Total marks of the student having highest marks in physics   : %d\n",sump);
    printf("Total marks of the student having highest marks in chemistry : %d\n",sumc);
    printf("Total marks of the student having highest marks in maths     : %d\n",summ);

    if(ip==ic && ic==im)
    {
        printf("Student with roll no. %d scored the highest marks in all the 3 subjects\n",(ip+1));
    }
    else if(ip==ic)
    {
        printf("Student with roll no. %d scored the highest marks in both physics and chemistry\n",(ip+1));
    }
    else if(ip==im)
    {
        printf("Student with roll no. %d scored the highest marks in both physics and mathematics\n",(ip+1));
    }
    else if(im==ic)
    {
        printf("Student with roll no. %d scored the highest marks in both mathematics and chemistry\n",(ip+1));
    }

    return 0;
}