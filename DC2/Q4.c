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

int equal(struct node* head1, struct node* head2)
{
    int size1=size(head1);
    int size2=size(head2);
    if(size1!=size2)
    {
        return 0;
    }
    else
    {
        struct node* t1=head1;
        struct node* t2=head2;
        while(t1!=NULL)
        {
            if(t1->data!=t2->data)
            {
                return 0;
            }

            t1=t1->next;
            t2=t2->next;
        }
    }
    return 1;
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
    if(equal(head1,head2)==1)
    {
        printf("\n\nEqual Linked List\n");
    }
    else
    {
        printf("\n\nUnequal Linked List\n");
    }

    return 0;
}