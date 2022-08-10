#include <stdio.h>
#include <stdlib.h>
struct faculty
{
    char name[50];
    int id;
    int subject;
    int class;
};

void insertStruct(struct faculty *s, int i)
{
    printf("Enter faculty name, faculty number, subject and class codes respectively :\n");
    scanf("%s %d %d %d", (s + i)->name, &(s + i)->id, &(s + i)->subject, &(s + i)->class);
}

void printStruct(struct faculty *s, int n)
{
    printf("\nName\tFaculty Id.\tSubject code\tClass code\n\n");
    for (int x = 0; x < n; x++)
    {
        printf("%s\t%d\t\t%d\t\t%d\n", (s + x)->name, (s + x)->id, (s + x)->subject, (s + x)->class);
    }
}

int main()
{
    int i = 0;
    int n;
    printf("Enter number of faculties : ");
    scanf("%d",&n);

    struct faculty *s = (struct faculty *)malloc(n * sizeof(struct faculty));
    printf("Press 1 for inserting information.\n");
    printf("Press 2 for viewing the information.\n");
    printf("Press 0 to exit.\n");
    int c;
    do
    {
        printf("Enter your choice : ");
        scanf("%d", &c);
        switch (c)
        {
        case 0:
            break;

        case 1:
            insertStruct(s, i);
            i++;
            break;

        case 2:
            printStruct(s, i);
            break;
        }
    } while (c != 0 && i<n);

    free(s);

    printStruct(s, n);

    return 0;
}