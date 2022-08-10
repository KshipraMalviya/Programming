#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <dirent.h>

struct node
{

    char s[50];

    struct node *next;
};

int main()
{

    DIR *d;

    struct dirent *dir;

    d = opendir("C:\\Users\\DELL\\Desktop\\Programming\\CodingC++\\OperatorOverloading");

    struct node *head = (struct node *)malloc(sizeof(struct node));

    if (d)
    {

        struct node *temp = head;

        while ((dir = readdir(d)) != NULL)
        {

            int i;

            for (i = 0; dir->d_name[i] != '.'; i++) ;

            if (dir->d_name[i + 1] == 't' && dir->d_name[i + 2] == 'x' && dir->d_name[i + 3] == 't')
            {

                struct node *newnode = (struct node *)malloc(sizeof(struct node));

                strcpy(newnode->s, dir->d_name);

                temp->next = newnode;

                temp = temp->next;

                printf("%s\n", dir->d_name);
            }
        }

        closedir(d);
    }

    struct node *t = head->next;

    while (t != NULL)
    {

        printf("file name= %s \n", t->s);

        t = t->next;
    }

    return (0);
}