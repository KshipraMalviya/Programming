#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node* next;
};


int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    printf("Enter 10 elements in the linked list\n");
    int n;
    scanf("%d",&n);
    head->data=n;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    for(int x=1; x<=9; x++)
    {
        scanf("%d",&n);
        struct node* llnode=(struct node*)malloc(sizeof(struct node));
        llnode->data=n;
        temp->next=llnode;
        temp=llnode;
    }
    temp->next=NULL;
    printf("\nLinked List\n\n");
    struct node* t=head;
    while(t!=NULL)
    {
        printf("%d -> ",t->data);
        t=t->next;
    }
    printf("NULL\n");

    return 0;
}