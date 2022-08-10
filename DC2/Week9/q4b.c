#include <stdio.h>
#include<stdlib.h>

struct node
{
    int c;
    int e;
    struct node *next;
};

struct node *createLL()
{
    int size;
    printf("Enter the number of terms in the polynomial : ");
    scanf("%d", &size);
    struct node *head = (struct node *)malloc(sizeof(struct node));
    printf("Enter element 1 (coefficient and power of x)\n");
    int coeff, exp;
    scanf("%d%d", &coeff, &exp);
    head->c = coeff;
    head->e = exp;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp = head;
    for (int x = 1; x < size; x++)
    {
        printf("Enter element %d (coefficient and power of x)\n", x + 1);
        scanf("%d%d", &coeff, &exp);
        struct node *llnode = (struct node *)malloc(sizeof(struct node));
        llnode->c = coeff;
        llnode->e = exp;
        temp->next = llnode;
        temp = llnode;
    }
    temp->next = NULL;
    return head;
}

int size(struct node* head)
{
    int count=0;
    struct node* temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

struct node* insert(struct node* head, int coeff, int exp)
{
    struct node* temp;
    struct node* newPoly=(struct node *)malloc(sizeof(struct node));
    newPoly->c=coeff;
    newPoly->e=exp;
    newPoly->next=NULL;

    if(head==NULL || exp > head->e)
    {
        newPoly->next=head;
        head=newPoly;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL && temp->next->e >= exp)
        {
            temp=temp->next;
        }
        newPoly->next=temp->next;
        temp->next=newPoly;
    }
    return head;
}

struct node *condensePoly(struct node *head)
{
    struct node *newhead = (struct node *)malloc(sizeof(struct node));
    struct node *t1 = head;
    struct node *temp = newhead;
    while (t1 != NULL)
    {
        newhead=insert(newhead,t1->c,t1->e);
        t1=t1->next;
    }
    while(temp->next!=NULL)
    {
        if(temp->e==temp->next->e)
        {
            temp->c=temp->c + temp->next->c;
            struct node* tt=temp->next;
            temp->next=temp->next->next;
            free(tt);
        }
        else
        {
            temp=temp->next;
        }
    }

    return newhead;
}

int equalPoly(struct node* head1, struct node* head2)
{
    int s1=size(head1);
    int s2=size(head2);
    if(s1!=s2) return 0;
    struct node* t1=head1;
    struct node* t2=head2;
    while(t1!=NULL)
    {
        if(!(t1->c==t2->c && t1->e==t2->e))
        {
            return 0;
        }
        t1=t1->next;
        t2=t2->next;
    }
    return 1;
}

void printLL(struct node* head)
{
    struct node* temp=head;
    while(temp->next!=NULL)
    {
        printf("%dx^%d + ",temp->c,temp->e);
        temp=temp->next;
    }
    printf("%dx^%d",temp->c,temp->e);
}

int main()
{
    printf("For the first polynomial\n");
    struct node* head1=createLL();
    printf("For the second polynomial\n");
    struct node* head2=createLL();
    struct node* h1=condensePoly(head1);
    struct node* h2=condensePoly(head2);
    if(equalPoly(h1,h2)) printf("The two linked lists are equal.\n");
    else printf("The two linked lists are not equal.\n");

    return 0;
}