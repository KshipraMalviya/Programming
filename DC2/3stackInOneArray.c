#include<stdio.h>

int stack[99];
int top1=-1;
int top2=32;
int top3=65;

void push1(int x)
{
    if(top1==32)
    {
        printf("Stack Overflow");
    }
    else
    {
        stack[++top1]=x;
    }
}

void push2(int x)
{
    if(top2==65)
    {
        printf("Stack Overflow");
    }
    else
    {
        stack[++top2]=x;
    }
}

void push3(int x)
{
    if(top3==98)
    {
        printf("Stack Overflow");
    }
    else
    {
        stack[++top3]=x;
    }
}

void pop1()
{
    if(top1==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Popped Value = %d",stack[top1]);
        top1--;
    }
}

void pop2()
{
    if(top2==32)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Popped Value = %d",stack[top2]);
        top2--;
    }
}

void pop3()
{
    if(top3==65)
    {
        printf("Stack Underflow");
    }
    else
    {
        printf("Popped Value = %d",stack[top3]);
        top3--;
    }
}

void print1()
{
    for(int x=0; x<=top1; x++)
    {
        printf("%d", stack[x]);
    }
}

void print2()
{
    for(int x=33; x<=top2; x++)
    {
        printf("%d", stack[x]);
    }
}

void print3()
{
    for(int x=66; x<=top3; x++)
    {
        printf("%d", stack[x]);
    }
}

int main()
{
    printf("1 - Push1\n");
    printf("2 - Pop1\n");
    printf("3 - Push2\n");
    printf("4 - Pop2\n");
    printf("5 - Push3\n");
    printf("6 - Pop3\n");
    printf("7 - Print1\n");
    printf("8 - Print2\n");
    printf("9 - Print3\n");
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
            printf("Enter number to be pushed in stack 1 : ");
            scanf("%d", &x);
            push1(x);
            break;

        case 2:
            pop1();
            break;

        case 3:
            printf("Enter number to be pushed in stack 2 : ");
            scanf("%d", &x);
            push2(x);
            break;

        case 4:
            pop2();
            break;

        case 5:
            printf("Enter number to be pushed in stack 3 : ");
            scanf("%d", &x);
            push3(x);
            break;

        case 6:
            pop3();
            break;

        case 7:
            print1();
            break;

        case 8:
            print2();
            break;

        case 9:
            print3();
            break;

        default:
            break;
        }

    } while (c != 0);

    return 0;
}