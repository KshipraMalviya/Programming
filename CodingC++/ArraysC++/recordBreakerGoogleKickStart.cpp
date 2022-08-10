#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ar[n];
    for(int x=0; x<n; x++)
    {
        cout<<"Enter number of visitors on day "<<(x+1)<<" : ";
        cin>>ar[x];
    }
    int i=0;
    for(int x=1; x<n; x++)
    {
        if(ar[i]<ar[x])
        {
            i=x;
        }
    }
    if(ar[0]>ar[1])
    {
        cout<<"Day 1"<<endl;
    }
    for(int x=1; x<i; x++)
    {
        bool r=true;
        for(int y=0; y<x; y++)
        {
            if(ar[y]>ar[x])
            {
                r=false;
                break;
            }
        }
        if(ar[x]>ar[x+1] && r==true)
        {
            cout<<"Day "<<(x+1)<<endl;
        }
    }
    cout<<"Day "<<(i+1);
    return 0;
}