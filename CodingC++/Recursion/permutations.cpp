#include<iostream>
using namespace std;

void swap(int ar[],int x,int cid)
{
    int t=ar[x];
    ar[x]=ar[cid];
    ar[cid]=t;
}

void permutation(int ar[],int n,int cid)
{
     if(cid==n-1)
     {
         for(int x=0; x<n; x++)
         {
             cout<<ar[x];
         }
         cout<<endl;
     }
     for(int x=cid; x<n; x++)
     {
         swap(ar,x,cid);
         permutation(ar,n,cid+1);
         swap(ar,x,cid);
     }
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
    int ar1[n];
    for(int x=0; x<n; x++)
    {
        ar1[x]=0;
    }
    permutation(ar,n,0);
    
    return 0;
}