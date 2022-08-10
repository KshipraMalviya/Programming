#include<iostream>
using namespace std;

void swap(int ar[],int a,int b)
{
    int t=ar[a];
    ar[a]=ar[b];
    ar[b]=t;
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ar[n];
    cout<<"Enter elements "<<endl;
    for(int x=0; x<n; x++)
    {
        cin>>ar[x];
    }
    for(int x=1; x<n; x+=2)
    {
        if(ar[x]>ar[x-1])
        {
            swap(ar,x,x-1);
        }
        if(ar[x]>ar[x+1] && x<=n-2)
        {
            swap(ar,x,x+1);
        }
    }

    for(int x=0; x<n; x++)
    {
        cout<<ar[x]<<" ";
    }

    return 0;
}