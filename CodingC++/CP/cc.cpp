#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int> v;
    int count=102;
    int i=3;
    while(count--)
    {
        int p=1;
        for(int x=2; x<=sqrt(i); x++)
        {
            if(i%x==0)
            {
                p=0; break;
            }
        }
        if(p) v.push_back(i);
        i++;
    }

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        cout<<1<<" ";
        n--;
        if(n!=0) 
        {
            cout<<2<<" ";
            n--;
        }
        int c=0;
        while(n)
        {
            cout<<v[c]<<" ";
            n--;
            if(n!=0) 
            {
                cout<<2*v[c]<<" ";
                c++;
                n--;
            }
            if(c==100)
            {
                c=0;
            }
        }
    }

    return 0;
}