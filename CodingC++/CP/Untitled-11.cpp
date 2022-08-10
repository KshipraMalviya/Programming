#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(n%2!=0)
        {
            for(int x=n; x>=1; x--)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else
        {
            if(n==2)
            {
                cout<<-1<<endl;
            }
            else
            {
                int a=n-1;
                cout<<a<<" ";
                n--;
                while(n>1)
                {
                    a=a>>1;
                    cout<<a<<" ";
                    a=a|1;
                    cout<<a<<" ";
                    n=n-2;
                }
                a=a>>1;
                a=a|1;
                cout<<a<<" ";
            }
        }
    }

    return 0;
}