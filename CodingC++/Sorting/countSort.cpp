#include<iostream>
using namespace std;

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
    int max=ar[0];
    for(int x=1; x<n; x++)
    {
        if(ar[x]>max)
        {
            max=ar[x];
        }
    }
    int count[max+1];
    for(int x=0; x<max+1; x++)
    {
        count[x]=0;
    }
    for(int x=0; x<n; x++)
    {
        count[ar[x]]++;
    }
    int pos[max+1];
    int sum=0;
    for(int x=0; x<max+1; x++)
    {
        sum+=count[x];
        pos[x]=sum;
    }
    int ar1[n];
    for(int x=n-1; x>=0; x--)
    {
         pos[ar[x]]--;
         ar1[pos[ar[x]]]=ar[x];
    }
    for(int x=0; x<n; x++)
    {
        cout<<ar1[x]<<endl;
    }

    return 0;
}