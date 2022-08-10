#include<stdio.h>

int ar[100];
int t1=-1, t2=100;

void push1(int x)
{
    t1++;
    if(t1<t2)
    {
        ar[t1]=x;
    }
    else
    {
        printf("Stack Overflow");
    }
}

void push2(int x)
{
    t2--;
    if(t1<t2)
    {
        ar[t2]=x;
    }
    else
    {
        printf("Stack Overflow");
    }
}

void pop1()
{
    if(t1==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        t1--;
    }
}

void pop2()
{
    if(t2==100)
    {
        printf("Stack Underflow");
    }
    else
    {
        t2++;
    }
}

int top1()
{
    return ar[t1];
}

int top2()
{
    return ar[t2];
}

void displayOverlappingStack()
{
    if(t1==-1 && t2==100)
    {
        printf("Empty Stack\n");
        return;
    }
    for(int x=t1; x>=0; x--)
    {
        printf("%d ",ar[x]);
    }
    for(int x=99; x>=t2; x--)
    {
        printf("%d ",ar[x]);
    }
}

int main()
{
    printf("1 - Push in Stack 1\n");
    printf("2 - Push in Stack 2\n");
    printf("3 - Pop from Stack 1\n");
    printf("4 - Pop from Stack 2\n");
    printf("5 - Top of stack 1\n");
    printf("6 - Top of stack 2\n");
    printf("7 - Display Overlapping Stack\n");
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
            push1(x);
            break;

        case 2:
            printf("Enter number to be pushed : ");
            scanf("%d", &x);
            push2(x);
            break;

        case 3:
            pop1();
            break;

        case 4:
            pop2();
            break;

        case 5:
            printf("Element on top of stack 1 = %d",top1());
            break;

        case 6:
            printf("Element on top of stack 2 = %d",top2());
            break;

        case 7:
            displayOverlappingStack();
            break;

        default:
            break;
        }

    } while (c != 0);

    return 0;
}