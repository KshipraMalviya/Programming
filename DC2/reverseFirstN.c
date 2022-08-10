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
    struct node* temp=head;
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

struct node* getPtr(struct node* head, int k)
{
    struct node* temp=head;
    k--;
    while(k--)
    {
        temp=temp->next;
    }
    return temp;
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

struct node* reverseN(struct node* head, int n)
{
    if(n==1 || n==0) return head;
    struct node* ptr=getPtr(head,n);
    struct node* nex=ptr->next;
    ptr->next=NULL;
    struct node* newhead=reverse(head);
    head->next=nex;
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
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    struct node* head=createLL();
    struct node* reversed=reverseN(head,n);
    printLL(reversed);

    return 0;
}