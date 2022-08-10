#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top;

int isEmpty()
{
    if (top == NULL)
        return 1;
    return 0;
}

void push(int x)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next=top;
    top=newnode;
}

void pop()
{
    if (top != NULL)
    {
        printf("%d", top->data);
        struct node *temp = top;
        top = top->next;
        free(temp);
    }
    else
    {
        printf("Stack Underflow\n");
    }
}

void peek()
{
    if (top != NULL)
    {
        printf("%d", top->data);
    }
    else
    {
        printf("Empty Stack\n");
    }
}

void display()
{
    struct node *temp = top;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    top = (struct node *)malloc(sizeof(struct node));
    top = NULL;
    printf("1 - Push\n");
    printf("2 - Pop\n");
    printf("3 - Peek\n");
    printf("4 - Display\n");
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
            printf("Enter number to be pushed : ");
            scanf("%d", &x);
            push(x);
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        default:
            break;
        }

    } while (c != 0);

    return 0;
}