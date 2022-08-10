#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

int isEmpty()
{
    if (front == NULL && rear == NULL)
    {
        return 1;
    }
    return 0;
}

void enqueue(int x)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = x;
    if (front == NULL && rear == NULL)
    {
        front = n;
        rear = n;
    }
    else
    {
        struct node* prev=rear;
        rear = n;
        prev->next=rear;
    }
    rear->next=NULL;
}

void dequeue()
{
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty\n");
    }
    else if(front==rear)
    {
        front=NULL;
        rear=NULL;
    }
    else
    {
        struct node *temp = front;
        front = front->next;
        free(temp);
    }
}

void peek()
{
    if (front == NULL && rear == NULL)
    {
        printf("Queue if empty\n");
    }
    else
    {
        printf("Front Value = %d\n", front->data);
    }
}

void display()
{
    if (front == NULL && rear == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        struct node *temp = front;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp=temp->next;
        }
    }
}

int main()
{
    printf("1 - Enqueue\n");
    printf("2 - Dequeue\n");
    printf("3 - Peek\n");
    printf("4 - isEmpty\n");
    printf("5 - Display Queue\n");
    printf("0 - Exit\n");
    int c, x;
    do
    {
        printf("\nEnter your choice : ");
        scanf("%d", &c);
        switch (c)
        {

        case 0:
            break;

        case 1:
            printf("Enter number to be enqueued : ");
            scanf("%d", &x);
            enqueue(x);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            peek();
            break;

        case 4:
            if (isEmpty())
                printf("Queue is empty\n");
            else
                printf("Not empty\n");
            break;

        case 5:
            display();
            break;

        default:
            break;
        }

    } while (c != 0);

    return 0;
}