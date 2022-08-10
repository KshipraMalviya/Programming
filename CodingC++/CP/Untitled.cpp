#include<bits/stdc++.h>
#include<iostream>
#include <string>

using namespace std;

int main()
{
    int t; cin>>t;
    for(int x=1; x<=t; x++)
    {
        int n; cin>>n;
        string s; cin>>s;
        unordered_set<string> st;
        for(int x=0; x<n; x++)
        {
            string t=s;
            s.erase(x,1);
            st.insert(s);
            s=t;
        }
        cout<<st.size()<<endl;
    }

    return 0;
}