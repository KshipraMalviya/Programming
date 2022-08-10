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
    if(head==NULL || head->next==NULL) return NULL;
    struct node* temp=head->next;
    struct node* newhead=temp;
    struct node* prev=NULL;
    struct node* p=NULL;
    while(temp)
    {
        if(prev)
        {
            prev->next=temp;
            p->next=NULL;
        }
        if(temp->next!=NULL)
        {
            prev=temp;
            p=temp->next;
            temp=temp->next->next;
        }
        else break;
    }
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
    printf("Linked list formed by concatenating the even-positioned nodes of the two linked lists\n");
    printLL(concatenateEven(head1,head2));

    return 0;
}