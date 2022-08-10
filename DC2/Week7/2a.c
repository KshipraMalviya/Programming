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
    for(int x=0; x<l/2; x++)
    {
        push(s[x]);
    }
    int f=1;
    int p=(l%2==0)?l/2:(l/2)+1;
    for(int x=p; x<l; x++)
    {
        if(peek()!=s[x])
        {
            f=0;
            break;
        }
        pop();
    }
    if(f) printf("Palindrome string");
    else printf("Not a palindrome string");

    return 0;
}