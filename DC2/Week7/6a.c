#include<stdio.h>

int queue[100];
int front=-1,rear=-1;

int isEmpty()
{
    if(rear==-1 && front==-1)
    {
        return 1;
    }
    return 0;
}

int isFull()
{
    if(rear==99)
    {
        return 1;
    }
    return 0;
}

void enqueue(int x)
{
    if(front==-1 && rear==-1)
    {
        front++; rear++;
        queue[front]=x;
    }
    else if(rear==99)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}

void dequeue()
{
    if(front>rear)
    {
        printf("Queue Underflow\n");
    }
    else if(front==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        front++;
    }
}

int frontElement()
{
    if(front>rear)
    {
        printf("Queue Underflow\n");
    }
    else if(front==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        return queue[front];
    }
}

void display()
{
    if(front==-1 && rear==-1 || front>rear)
    {
        printf("Empty Queue\n");
    }
    else
    {
        for(int x=front; x<=rear; x++)
        {
            printf("%d ",queue[x]);
        }
    }
}

int main()
{
    printf("1 - Enqueue\n");
    printf("2 - Dequeue\n");
    printf("3 - Front Element\n");
    printf("4 - Display\n");
    printf("5 - isEmpty\n");
    printf("6 - isFull\n");
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
            printf("Front element is = %d\n",frontElement());
            break;

        case 4:
            display();
            break;

        case 5:
            if(isEmpty()) printf("Queue is empty\n");
            else printf("Queue is not empty\n");
            break;

        case 6:
            if(isFull()) printf("Queue is full\n");
            else printf("Queue is not full\n");
            break;

        default:
            break;
        }

    } while (c != 0);

    return 0;
}