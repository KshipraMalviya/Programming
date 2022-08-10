#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node* next;
};


int main()
{
    int size;
    printf("Enter size of the array : ");
    scanf("%d",&size);
    int ar[size];
    printf("Enter elements\n");
    for(int x=0; x<size; x++)
    {
        scanf("%d",&ar[x]);
    }

    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=ar[0];
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    for(int x=1; x<size; x++)
    {
        struct node* llnode=(struct node*)malloc(sizeof(struct node));
        llnode->data=ar[x];
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