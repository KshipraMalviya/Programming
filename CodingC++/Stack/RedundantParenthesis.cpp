#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
    cout<<"Enter the expression : ";
    string s;
    cin>>s;
    int l=s.length();
    stack<string>st;
    int redundant=0;
    for(int x=0; x<l; x++)
    {
        if(s[x]=='(' || s[x]=='+' || s[x]=='-' || s[x]=='*' || s[x]=='/')
        {
            string op(1,s[x]);
            st.push(op);
        }
        else if(s[x]==')')
        {
            if(st.top()!="(")
            {
                while(st.top()!="(")
                {
                    st.pop();
                }
                st.pop();
            }
            else
            {
                redundant++;
                st.pop();
            }
        }
    }
    cout<<"Number of redundant parenthesis : "<<redundant<<endl;

    return 0;
}