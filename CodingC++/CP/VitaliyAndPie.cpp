#include<bits/stdc++.h> // CODEFORCES Round #297 Div 2 (Link in Luv bhaiya's STL video description)
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n; cin>>n;
    string s; cin>>s;
    unordered_map<char,int> door;
    unordered_map<char,int> key;
    int count=0;
    for(int x=1; x<2*n-2; x+=2)
    {
        key[s[x-1]]++;
        door[s[x]]++;
        if(key.find(tolower(s[x]))!=key.end())
        {
            int k=key.find(tolower(s[x]))->second;
            int d=door[s[x]];
            if(d>k)
            {
                count++;
            }
        }
        else
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}