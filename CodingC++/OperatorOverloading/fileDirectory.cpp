#include <iostream>
#include <fstream>
#include <cstring>
#include <dirent.h>
using namespace std;
struct node
{
    char a[100];
    struct node *next;
};
struct node *addnode(struct node *head, char *s)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    strcpy(p->a, s);
    p->next = head;
    head = p;
    return head;
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head = NULL;
    DIR *d;
    struct dirent *dir;
    d = opendir(".");
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
            // cout << dir->d_name << " ";
            head = addnode(head, dir->d_name);
        }
    }
    while (head != NULL)
    {
        cout << head->a << endl;
        head = head->next;
    }
}