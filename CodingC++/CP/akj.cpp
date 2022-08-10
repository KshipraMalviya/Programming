#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y; cin>>x>>y;
        if(x==y)
        {
            cout<<"-1"<endl;
        }
        else 
        {
            cout<<"0 "<<y<<endl;
            cout<<"1 "<<x<<endl;
        }
    }
    
    return 0;
}