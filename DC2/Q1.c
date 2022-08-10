#include<stdio.h>
#include<stdlib.h>

struct node
{
    int roll;
    char name[50];
    int marks;
    struct node* next;
};

int main()
{
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    struct node* head=(struct node*)malloc(sizeof(struct node));
    printf("Enter details (roll no. , name , marks) of student 1\n");
    scanf("%d",&head->roll);
    scanf("%s",&head->name);
    scanf("%d",&head->marks);
    fflush(stdin);
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp=head;
    for(int x=1; x<n; x++)
    {
        struct node* llnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter details (roll no. , name , marks) of student %d\n",x+1);
        scanf("%d",&llnode->roll);
        scanf("%s",&llnode->name);
        scanf("%d",&llnode->marks);
        temp->next=llnode;
        temp=llnode;
    }
    temp->next=NULL;
    printf("\nLinked List\n\n");
    temp=head;
    while(temp!=NULL)
    {
        printf("(%d , %s , %d)  ->  ", temp->roll, temp->name, temp->marks);
        temp=temp->next;
    }
    printf("NULL\n");

    return 0;
}