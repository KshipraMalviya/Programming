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
    
    for(int x=0; x<n; x++)
    {
        int i=x;
        int n=ar[x];
        while(i!=0 && ar[i-1]>n)
        {
            ar[i]=ar[i-1];
            i--;
        }
        ar[i]=n;
    }
    for(int x=0; x<n; x++)
    {
        cout<<ar[x]<<" ";
    }

    return 0;
}