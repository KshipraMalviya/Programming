#include<iostream>
#include<string>
#include<stack>

using namespace std;

int precedence(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*' || c=='/')
    {
        return 2;
    }
    else if(c=='+' || c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string InfixToPostfix(stack<char>s, string infix)
{
    string postfix;
    for(int x=0; x<infix.length(); x++)
    {
        if((infix[x]>='a' && infix[x]<='z') || (infix[x]>='A' && infix[x]<='Z'))
        {
            postfix=postfix+infix[x];
        }
        else if(infix[x]=='(')
        {
            s.push(infix[x]);
        }
        else if(infix[x]==')')
        {
            while((s.top()!='(') && (!s.empty()))
            {
                char temp=s.top();
                postfix+=temp;
                s.pop();
            }
            if(s.top()=='(')
            {
                s.pop();
            }
        }
        else
        {
            if(s.empty())
            {
                s.push(infix[x]);
            }
            else
            {
                if(precedence(infix[x])>precedence(s.top()))
                {
                    s.push(infix[x]);
                }
                else if(precedence(infix[x])==precedence(s.top()) && (infix[x]=='^'))
                {
                    s.push(infix[x]);
                }
                else
                {
                    while((!s.empty()) && (precedence(infix[x])<=precedence(s.top())))
                    {
                        postfix+=s.top();
                        s.pop();
                    }
                    s.push(infix[x]);
                }
            }
        }
    }
    while(!s.empty())
    {
        postfix+=s.top();
        s.pop();
    }

    return postfix;
}

int main()
{
    string infix, postfix;
    cout<<"Enter an infix expression"<<endl;
    cin>>infix;
    stack<char>s;
    cout<<"INFIX EXPRESSION : "<<infix<<endl;
    postfix=InfixToPostfix(s,infix);
    cout<<endl<<"POSTFIX EXPRESSION : "<<postfix<<endl;

    return 0;
}