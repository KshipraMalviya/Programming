#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool balancedP(string s)
{
    stack<char>st;
    if(s[0]==')')
    {
        return false;
    }
    for(int x=0; x<s.length(); x++)
    {
        if(s[x]=='{' || s[x]=='[' || s[x]=='(')
        {
            st.push(s[x]);
        }
        else
        {
            if((s[x]==')' && st.top()!='(') || (s[x]=='}' && st.top()!='{') || (s[x]==']' && st.top()!='['))
            {
                return false;
            }
            st.pop();
        }
    }
    return true;
}

int main()
{
    cout<<"INPUT\n*********"<<endl<<endl;
    string s;
    cin>>s;

    if(balancedP(s))
    {
        cout<<"Balanced Parenthesis"<<endl;
    }
    else
    {
        cout<<"Unbalanced Parenthesis"<<endl;
    }

    return 0;
}