#include<iostream>
#include<string>
#include<stack>
#include<algorithm>

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

string InfixToPrefix(stack<char>s, string infix)
{
    string prefix;
    reverse(infix.begin(),infix.end());
    for(int x=0; x<infix.length(); x++)
    {
        if(infix[x]=='(')
        {
            infix[x]=')';
        }
        else
        {
            if(infix[x]==')')
            infix[x]='(';
        }
    }   // difference
    for(int x=0; x<infix.length(); x++)
    {
        if((infix[x]>='a' && infix[x]<='z') || (infix[x]>='A' && infix[x]<='Z'))
        {
            prefix+=infix[x];
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
                prefix+=temp;
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
                    while(precedence(infix[x])==precedence(s.top()) && (infix[x]=='^'))   // difference
                    {
                        prefix+=s.top();
                        s.pop();
                    }
                    s.push(infix[x]);
                }
                else if(precedence(infix[x])==precedence(s.top()))
                {
                    s.push(infix[x]);
                }
                else
                {
                    while((!s.empty()) && (precedence(infix[x])<precedence(s.top())))
                    {
                        prefix+=s.top();
                        s.pop();
                    }
                    s.push(infix[x]);
                }
            }
        }
    }
    while(!s.empty())
    {
        prefix+=s.top();
        s.pop();
    }
    reverse(prefix.begin(),prefix.end());

    return prefix;
}

int main()
{
    string infix, postfix;
    cout<<"Enter an infix expression"<<endl;
    cin>>infix;
    stack<char>s;
    cout<<"INFIX EXPRESSION : "<<infix<<endl;
    postfix=InfixToPrefix(s,infix);
    cout<<endl<<"PREFIX EXPRESSION : "<<postfix<<endl;

    return 0;
}