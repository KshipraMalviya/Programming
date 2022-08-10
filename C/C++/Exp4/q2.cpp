#include<iostream>
using namespace std;

void reverse(int a[], int n)
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
    cout<<"Enter size of the array : ";
    cin>>n;
    int a[n];
    for(int x=0; x<n; x++)
    {
        cin>>a[x];
    }
    reverse(a,n);
    cout<<"\nReversed Array\n"<<endl;
    for(int x=0; x<n; x++)
    {
        cout<<a[x]<<endl;
    }

    return 0;
}