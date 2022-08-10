#include<iostream>
#include<string>
#include<stack>

using namespace std;

string prefixToPostfix(string prefix)
{
    stack<string>st;
    for(int x=prefix.length()-1; x>=0; x--)
    {
        if((prefix[x]>='a' && prefix[x]<='z') || (prefix[x]>='A' && prefix[x]<='Z'))
        {
            string op(1,prefix[x]);
            st.push(op);
        }
        else
        {
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            st.push(op1+op2+prefix[x]);
        }
    }
    return st.top();
}

int main()
{
    cout<<"Enter postfix expression : ";
    string prefix;
    cin>>prefix;
    cout<<"Prefix Expression : "<<prefixToPostfix(prefix);

    return 0;
}