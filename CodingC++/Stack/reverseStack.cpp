#include<iostream>
#include<stack>

using namespace std;

void insertAtBottom(stack<int>&st, int top1)
{
    if(st.empty())
    {
        st.push(top1);
    }
    else
    {
        int top2=st.top();
        st.pop();
        insertAtBottom(st,top1);
        st.push(top2);
    }
}

void reverse(stack<int>&st)
{
    if(st.empty()) return;
    int top1=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,top1);
}

int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse(st);
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;

    return 0;
}