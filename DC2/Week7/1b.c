#include<stdio.h>
#include<string.h>

char stack[100];
int top=-1;

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

int peek()
{
    if(top==-1)
    {
        return -1;
    }
    return stack[top];
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
    char expn[100];
    printf("Enter the postfix expression\n");
    scanf("%s",expn);
    int l=strlen(expn);
    for(int x=0; x<l; x++)
    {
        char ch=expn[x];
        if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
        {
            int op2=peek()-48;
            pop();
            int op1=peek()-48;
            pop();
            if(ch=='+')
            {
                char c=(op1+op2)+'0';
                push(c);
            }
            else if(ch=='-')
            {
                char c=(op1-op2)+'0';
                push(c);
            }
            else if(ch=='*')
            {
                char c=(op1*op2)+'0';
                push(c);
            }
            else
            {
                char c=(op1/op2)+'0';
                push(c);
            }
        }
        else
        {
            push(ch);
        }
    }
    printf("\nValue of the postfix expression = %d",peek()-48);

    return 0;
}