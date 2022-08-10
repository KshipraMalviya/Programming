#include<iostream>
#include<string>
#include<stack>

using namespace std;

string postfixToPrefix(string postfix)
{
    stack<string>st;
    for(int x=0; x<postfix.length(); x++)
    {
        if((postfix[x]>='a' && postfix[x]<='z') || (postfix[x]>='A' && postfix[x]<='Z'))
        {
            string op(1,postfix[x]);
            st.push(op);
        }
        else
        {
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            st.push(postfix[x]+op2+op1);
        }
    }
    return st.top();
}

int main()
{
    cout<<"Enter postfix expression : ";
    string postfix;
    cin>>postfix;
    cout<<"Prefix Expression : "<<postfixToPrefix(postfix);

    return 0;
}