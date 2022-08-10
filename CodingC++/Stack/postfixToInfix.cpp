#include<iostream>
#include<stack>
#include<string>

using namespace std;

string infix(string s)
{
    stack<string>st;
    string infix;
    for(int x=0; x<s.length(); x++)
    {
        if((s[x]>='a' && s[x]<='z') || (s[x]>='A' && s[x]<='Z'))
        {
            string op(1, s[x]);
            st.push(op);
        }
        else
        {
            string c1=st.top();
            st.pop();
            string c2=st.top();
            st.pop();
            infix+="("+c2+s[x]+c1+")";
            st.push(infix);
            infix="";
        }
    }
    return st.top();
}

int main()
{
    cout<<"Enter postfix expression"<<endl;
    string s;
    cin>>s;
    cout<<"Infix Expression : "<<infix(s);

    return 0;
}