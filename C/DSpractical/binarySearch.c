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
    struct node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

struct node* getPtr(struct node* head, int k)
{
    if(k==0) return NULL;
    struct node* temp=head;
    while(--k)
    {
        temp=temp->next;
    }
    return temp;
}

int binarySearch(struct node* head, int k)
{
    int max=size(head);
    int min=1;
    while(min<=max)
    {
        int mid=(min+max)/2;
        struct node* ptr=getPtr(head,mid);
        if(ptr!=NULL && ptr->data==k)
        {
            return 1;
        }
        else if(ptr!=NULL && ptr->data>k)
        {
            max=mid-1;
        }
        else if(ptr!=NULL && ptr->data<k)
        {
            min=mid+1;
        }
    }
    return 0;
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
    int k;
    printf("Enter key to be searched : ");
    scanf("%d",&k);
    printf("\nEntered linked list\n");
    printLL(head);
    if(binarySearch(head,k))
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }
}