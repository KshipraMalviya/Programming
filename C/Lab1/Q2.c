#include <stdio.h>
#include <string.h>

struct Book
{
    char title[50];
    char auth[50];
    int cost;
    int year;
};

void printYear(struct Book s[],int n, int y)
{
    printf("\nBooks written in or after %d\n\n",y);
    for(int x=0; x<n; x++)
    {
        if(y<=s[x].year)
        {
            printf("%s\n",s[x].title);
            printf("%s\n",s[x].auth);
            printf("%d\n",s[x].cost);
            printf("%d\n",s[x].year);
            printf("\n");
        }
    }
}

void printAuth(struct Book s[],int n, char author[])
{
    printf("\nBooks written by %s\n\n", author);
    for(int x=0; x<n; x++)
    {
        int eq=strcmp(s[x].auth, author);
        if(eq==0)
        {
            printf("%s\n",s[x].title);
            printf("%s\n",s[x].auth);
            printf("%d\n",s[x].cost);
            printf("%d\n",s[x].year);
            printf("\n");
        }
    }
}

void print500(struct Book s[],int n)
{
    printf("\nBooks having title - computer and price below 500\n\n");
    for(int x=0; x<n; x++)
    {
        char str[]="computer";
        int eq=strcmp(s[x].title, str);
        if(eq==0 && s[x].cost<500)
        {
            printf("%s\n",s[x].title);
            printf("%s\n",s[x].auth);
            printf("%d\n",s[x].cost);
            printf("%d\n",s[x].year);
            printf("\n");
        }
    }
}

int main()
{
    int n;
    printf("Enter number of books : ");
    scanf("%d",&n);

    struct Book s[n];

    for(int x=0; x<n; x++)
    {
        printf("\nEnter information for book %d\n\n",(x+1));
        printf("Enter book title : ");
        scanf("%s",&s[x].title);
        printf("Enter name of the author : ");
        scanf("%s",&s[x].auth);
        printf("Enter cost : ");
        scanf("%d",&s[x].cost);
        printf("Enter year of publication : ");
        scanf("%d",&s[x].year);
    }
    
    print500(s,n);

    char author[50];
    printf("\n\nEnter the name of the author : ");
    scanf("%s",&author);
    printAuth(s,n,author);

    int y;
    printf("Enter year : ");
    scanf("%d",&y);
    printYear(s,n,y);

    return 0;
}