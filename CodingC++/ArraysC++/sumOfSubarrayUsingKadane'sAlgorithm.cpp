#include<iostream>
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
    int currentsum=0;
    int m=0;
    for(int x=0; x<n; x++)
    {
        currentsum+=ar[x];
        if(currentsum<0)
        {
            currentsum=0;
        }
        m=max(currentsum,m);
    }
    cout<<m<<endl;

    return 0;
}