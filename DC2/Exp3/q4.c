#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[50];
    int empno;
    int salary;
};

void insertStruct(struct employee *s, int i)
{
    printf("Enter employee name, employee number and salary respectively :\n");
    scanf("%s %d %d", (s + i)->name, &(s + i)->empno, &(s + i)->salary);
}

void printStruct(struct employee *s, int n)
{
    printf("\nName\tEmployee No.\tSalary\n\n");
    for (int x = 0; x < n; ++x)
    {
        printf("%s\t%d\t\t%d\n", (s + x)->name, (s + x)->empno, (s + x)->salary);
    }
}

int main()
{
    int i = 0;
    int n;
    printf("Enter number of employees : ");
    scanf("%d",&n);

    struct employee *s = (struct employee *)malloc(n * sizeof(struct employee));
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