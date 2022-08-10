#include<iostream>
using namespace std;

void reverse(int *a, int n)
{
    for(int x=0; x<n/2; x++)
    {
        int t=a[x];
        a[x]=a[n-1-x];
        a[n-1-x]=t;
    }
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ar[n];
    cout<<"Enter elements"<<endl;
    for(int x=0; x<n; x++)
    {
        cin>>ar[x];
    }
    reverse(ar,n);
    cout<<"\nReversed Array\n"<<endl;
    for(int x=0; x<n; x++)
    {
        cout<<ar[x]<<endl;
    }

    return 0;
}