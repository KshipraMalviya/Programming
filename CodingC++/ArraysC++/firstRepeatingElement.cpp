#include<iostream>
//#include "bits/stdc++.h"
using namespace std;

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    int ar[n];
    for(int x=0; x<n; x++)
    {
        cout<<"Enter element "<<(x+1)<<" : ";
        cin>>ar[x];
    }
    const int N=100;
    int idx[N];
    for(int x=0; x<N; x++)
    {
        idx[x]=-1;
    }
    int minidx=N;
    for(int x=0; x<n; x++)
    {
        if(idx[ar[x]]==-1)
        {
            idx[ar[x]]=x;
        }
        else
        {
             if(minidx>idx[ar[x]])
             {
                 minidx=idx[ar[x]];
             }
        }
    }
    if(minidx==N)
    {
         cout<<"-1"<<endl;
    }
    else
    {
        cout<<(minidx+1)<<endl;
    }

    return 0;
}