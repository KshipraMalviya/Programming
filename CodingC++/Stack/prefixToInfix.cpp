#include<iostream>
#include<stack>
#include<string>
#include<algorithm>

using namespace std;

string infix(string s)
{
    stack<string>st;
    string infix;
    for(int x=s.length()-1; x>=0; x--)
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
            infix+="("+c1+s[x]+c2+")";
            st.push(infix);
            infix="";
        }
    }
    return st.top();
}

int main()
{
    cout<<"Enter prefix expression"<<endl;
    string s;
    cin>>s;
    cout<<"Infix Expression : "<<infix(s);

    return 0;
}