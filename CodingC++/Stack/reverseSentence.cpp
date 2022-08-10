#include<iostream>
#include<stack>

using namespace std;

void reverseSentence(string s)
{
    s=s+" ";
    stack<string>st;
    string word="";
    for(int x=0; x<s.length(); x++)
    {
        if(s[x]==' ')
        {
            st.push(word);
            word="";
        }
        else
        {
            word=word+s[x];
        }
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    string s="Hey, how are you doing?";
    reverseSentence(s);

    return 0;
}