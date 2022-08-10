// Codeforces Beta Round #4 (Div. 2 Only) (Link in Luv bhaiya's STL video description)
#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n; cin>>n;
    unordered_set<string> st;
    for(int x=1; x<=n; x++)
    {
        string s; cin>>s;
        if(st.find(s)==st.end())
        {
            st.insert(s);
            cout<<"OK"<<endl;
        }
        else
        {
            int i=1;
            int n=s.length();
            s.append(to_string(i));
            while(st.find(s)!=st.end())
            {
                s=s.substr(0,n);
                i++;
                s.append(to_string(i));
            }
            cout<<s<<endl;
            st.insert(s);
        }
    }

    return 0;
}