#include<iostream>
#include<stack>
#include<math.h>

using namespace std;

int prefixEvaluation(string s)
{
    stack<int>st;
    for(int x=0; x<s.length(); x++)
    {
        if(s[x]>='0' && s[x]<='9')
        {
            st.push(s[x]-48);
        }
        else
        {
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();

            switch(s[x])
            {
                case '+':
                st.push(op1+op2);
                break;

                case '-':
                st.push(op1-op2);
                break;

                case '*':
                st.push(op1*op2);
                break;

                case '/':
                st.push(op1/op2);
                break;

                case '^':
                st.push(op1^op2);
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    cout<<prefixEvaluation("46+2/5*7+")<<endl;

    return 0;
}