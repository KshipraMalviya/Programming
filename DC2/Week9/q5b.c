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

struct node* onlyEven(struct node* head)
{
    int f=0;
    struct node* temp=head;
    struct node* newhead=NULL;
    struct node* prev=NULL;
    struct node* p=NULL;
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            f=1;
            if(prev==NULL)
            {
                newhead=temp;
                prev=temp;
                if(p) p->next=NULL;
            }
            else
            {
                prev->next=temp;
                prev=temp;
                if(p && p->data%2!=0) p->next=NULL;
            }
        }
        p=temp;
        temp=temp->next;
    }
    if(!f) return NULL;
    if(prev) prev->next=NULL;
    return newhead;
}

struct node* concatenateEven(struct node* head1, struct node* head2)
{
    struct node* h1=onlyEven(head1);
    struct node* h2=onlyEven(head2);
    if(h1==NULL) return h2;
    else if(h2==NULL) return h1;
    struct node* last=h1;
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=h2;
    return h1;
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
    printf("For the first linked list\n");
    struct node* head1=createLL();
    printf("For the second linked list\n");
    struct node* head2=createLL();
    printf("Linked list formed by concatenating the even nodes of the two linked lists\n");
    printLL(concatenateEven(head1,head2));

    return 0;
}