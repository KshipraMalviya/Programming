#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node* next;
};

struct node* createLL()
{
    int size;
    printf("Enter size of the linked list : ");
    scanf("%d",&size);
    struct node* head=(struct node*)malloc(sizeof(struct node));
    printf("Enter elements in the linked list\n");
    int n;
    scanf("%d",&n);
    head->data=n;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    for(int x=1; x<size; x++)
    {
        scanf("%d",&n);
        struct node* llnode=(struct node*)malloc(sizeof(struct node));
        llnode->data=n;
        temp->next=llnode;
        temp=llnode;
    }
    temp->next=NULL;
    return head;
}

struct node* reverse(struct node* head)
{
    struct node* prev=NULL;
    struct node* curr=head;
    while(curr!=NULL)
    {
        struct node* nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
    }
    return prev;
}

void printLL(struct node* head)
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct node* head=createLL();
    printf("\n\nOriginal Linked List\n");
    printLL(head);
    printf("\nReversed Linked List\n");
    printLL(reverse(head));

    return 0;
}