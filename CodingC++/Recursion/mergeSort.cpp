#include<iostream>
using namespace std;

void merge(int ar[],int st,int mid,int en)
{
    int a=st;
    int b=mid+1;
    int i=0;
    int ar2[en+1-st];
    while(a<=mid && b<=en)
    {
        if(ar[a]<ar[b])
        {
            ar2[i++]=ar[a++];
        }
        else
        {
            ar2[i++]=ar[b++];
        }
    }
    while(a<=mid)
    {
        ar2[i++]=ar[a++];
    }
    while(b<=en)
    {
        ar2[i++]=ar[b++];
    }
    i=0;
    for(int x=st; x<=en; x++)
    {
        ar[x]=ar2[i++];
    }
}

void msort(int ar[],int st,int en)
{
    if(st<en)
    {
        int mid=(st+en)/2;
        msort(ar,st,mid);
        msort(ar,mid+1,en);

        merge(ar,st,mid,en);
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
    msort(ar,0,n-1);
    cout<<endl;
    for(int x=0; x<n; x++)
    {
        cout<<ar[x]<<endl;
    }
   
    return 0;
}