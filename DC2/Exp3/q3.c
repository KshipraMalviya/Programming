#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    int roll;
    int marks;
};

void insertStruct(struct student *s, int i)
{
    printf("Enter name, roll number and marks respectively :\n");
    scanf("%s %d %d", (s + i)->name, &(s + i)->roll, &(s + i)->marks);
}

void printStruct(struct student *s, int n)
{
    printf("\nName\tRoll No.\tMarks\n\n");
    for (int x = 0; x < n; ++x)
    {
        printf("%s\t%d\t\t%d\n", (s + x)->name, (s + x)->roll, (s + x)->marks);
    }
}

int main()
{
    int i = 0;
    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);

    struct student *s = (struct student *)malloc(n * sizeof(struct student));
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

    printStruct(s, n);

    free(s);

    return 0;
}