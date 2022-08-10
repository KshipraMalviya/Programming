#include<stdio.h>
#include<string.h>

char stack[100];
int top=-1;

void push(char x)
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
        top--;
    }
}

char peek()
{
    return stack[top];
}

int main()
{
    char s[100];
    printf("Enter a string\n");
    scanf("%s",s);
    int l=strlen(s);
    int f=1;
    for(int x=0; x<l; x++)
    {
        if(s[x]=='(' || s[x]=='{' || s[x]=='[')
        {
            push(s[x]);
        }
        else
        {
            if(peek()=='(' && s[x]!=')')
            {
                f=0;
                break;
            }
            else if(peek()=='{' && s[x]!='}')
            {
                f=0;
                break;
            }
            else if(peek()=='[' && s[x]!=']')
            {
                f=0;
                break;
            }
            pop();
        }
    }
    if(f) printf("Valid Parenthesis");
    else printf("Invalid Parenthesis");

    return 0;
}