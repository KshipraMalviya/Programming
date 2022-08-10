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

int count(struct node* head, int c)
{
    if(head==NULL) 
    {
        return c;
    }
    return count(head->next,c+1);
}

struct node* swapInPair(struct node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    struct node* newhead=head->next;
    struct node* cur=head;
    struct node* prev=NULL;
    while(cur->next && cur->next->next)
    {
        struct node* nex=cur->next->next;
        if(prev) prev->next=cur->next;
        cur->next->next=cur;
        cur->next=nex;
        prev=cur;
        cur=nex;
    }
    if(cur->next)
    {
        prev->next=cur->next;
        prev->next->next=cur;
        cur->next=NULL;
    }

    return newhead;
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
    printf("\nSwapped Linked List\n");
    printLL(swapInPair(head));

    return 0;
}