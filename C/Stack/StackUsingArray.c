#include<stdio.h>

int stack[100];
int top=-1;

int isEmpty()
{
    if(top==-1) return 1;
    return 0;
}

void push(int x)
{
    if(top>=99)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        stack[++top]=x;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d",stack[top--]);
    }
}

void peek()
{
    if(top==-1)
    {
        printf("Empty Stack\n");
    }
    else
    {
        printf("%d",stack[top]);
    }
}

void display()
{
    for(int x=0; x<=top; x++)
    {
        printf("%d\n",stack[x]);
    }
}

int main()
{
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