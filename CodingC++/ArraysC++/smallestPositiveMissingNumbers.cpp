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
        cout<<"Enter element "<<(x+1)<<" : ";
        cin>>ar[x];
    }
    int N=100;
    int A[N];
    for(int x=0; x<N; x++)
    {
        A[x]=-1;
    }
    A[0]=1;
    for(int x=0; x<n; x++)
    {
        A[ar[x]]=1;
    }
    bool found=false;
    for(int x=0; x<N; x++)
    {
        if(A[x]==-1)
        {
            cout<<x<<endl;
            found=true; 
            return 0;
        }
    }
    if(!found)
    {
        cout<<"Not found!"<<endl;
    }

    return 0;
}