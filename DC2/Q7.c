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

struct node* merge(struct node* head1, struct node* head2)
{
    struct node* t1=head1;
    struct node* t2=head2;
    struct node* newhead;
    struct node* temp;
    if(t1->data < t2->data)
    {
        newhead=t1;
        struct node* tt=t1;
        t1=t1->next;
        tt->next=NULL;
    }
    else
    {
        newhead=t2;
        struct node* tt=t2;
        t2=t2->next;
        tt->next=NULL;
    }
    temp=newhead;
    while(t1!=NULL && t2!=NULL)
    {
        if(t1->data < t2->data)
        {
            temp->next=t1;
            temp=t1;
            t1=t1->next;
            temp->next=NULL;
        }
        else
        {
            temp->next=t2;
            temp=t2;
            t2=t2->next;
            temp->next=NULL;
        }
    }
    if(t1!=NULL)
    {
        temp->next=t1;
    }
    if(t2!=NULL)
    {
        temp->next=t2;
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
    printf("For 1st Linked List\n");
    struct node* head1=createLL();
    printf("For 2nd Linked List\n");
    struct node* head2=createLL();
    printf("\n\n1st Linked List\n");
    printLL(head1);
    printf("\n2nd Linked List\n");
    printLL(head2);
    printf("\n\nMerged Linked List\n");
    printLL(merge(head1,head2));

    return 0;
}