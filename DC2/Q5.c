#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node* next;
};

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

struct node* findIntersectionPoint(struct node* head1, struct node* head2)
{
    int size1=size(head1);
    int size2=size(head2);
    struct node* t1=(struct node*)malloc(sizeof(struct node));
    struct node* t2=(struct node*)malloc(sizeof(struct node));
    t1=head1;
    t2=head2;
    if(size1>size2)
    {
        int diff=size1-size2;
        while(diff--)
        {
            t1=t1->next;
        }
    }
    else
    {
        int diff=size2-size1;
        while(diff--)
        {
            t2=t2->next;
        }
    }
    while(t1!=NULL)
    {
        if(t1==t2)
        {
            return t1;
        }
        t1=t1->next;
        t2=t2->next;
    }
    return NULL;
}

int main()
{
    struct node* n1=(struct node*)malloc(sizeof(struct node));
    struct node* n2=(struct node*)malloc(sizeof(struct node));
    struct node* n3=(struct node*)malloc(sizeof(struct node));
    struct node* n4=(struct node*)malloc(sizeof(struct node));
    struct node* n5=(struct node*)malloc(sizeof(struct node));
    struct node* n6=(struct node*)malloc(sizeof(struct node));
    struct node* n7=(struct node*)malloc(sizeof(struct node));
    struct node* n8=(struct node*)malloc(sizeof(struct node));
    n1->data=1; n1->next=n2;
    n2->data=2; n2->next=n3;
    n3->data=3; n3->next=n4;
    n4->data=4; n4->next=n5;
    n5->data=5; n5->next=n6;
    n6->data=6; n6->next=NULL;
    n7->data=9; n7->next=n8;
    n8->data=10; n8->next=n5;

    struct node* intersection=findIntersectionPoint(n1,n7);
    if(intersection!=NULL)
    {
        printf("Intersects at the node with data %d\n",intersection->data);
    }
    else
    {
        printf("The linked lists don't intersect\n");
    }

    return 0;
}