#include<stdio.h>

struct Faculty
{
    char name[100];
    int id;
    char subject[50];
    int c;
};


int main()
{
    int n;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    struct Faculty f[n];
    printf("Enter information about all the faculties\n");
    for(int x=0; x<n; x++)
    {
        printf("Enter name of faculty %d : ",x+1);
        scanf("%s",&f[x].name);
        printf("Enter faculty id : ");
        scanf("%d",&f[x].id);
        printf("Enter subject : ");
        scanf("%s",&f[x].subject);
        printf("Enter class : ");
        scanf("%d",&f[x].c);
        printf("\n");
    }
    for(int x=0; x<n-1; x++)
    {
        for(int y=0; y<n-1; y++)
        {
            if(f[y].id>f[y+1].id)
            {
                struct Faculty f2;
                f2=f[y];
                f[y]=f[y+1];
                f[y+1]=f2;
            }
        }
    }
    printf("Sorted Faculty Array\n");
    printf("Faculty ID\tFaculty Name\n");
    for(int x=0; x<n; x++)
    {
        printf("%d\t\t%s\n",f[x].id,f[x].name);
    }

    return 0;
}