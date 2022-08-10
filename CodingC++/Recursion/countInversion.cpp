#include<iostream>
using namespace std;

void merge(int ar[],int st,int mid,int en,int count[])
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
            count[0]=count[0]+(mid-a+1);
            ar2[i++]=ar[b++];
        }
    }
    while(a<=mid)
    {
        ar2[i++]=ar[a++];
    }
    while(b<=en)
    {
        if(ar[a]>ar[b])
        {
            count[0]=count[0]+(mid-a+1);
        }
        ar2[i++]=ar[b++];
    }
    i=0;
    for(int x=st; x<=en; x++)
    {
        ar[x]=ar2[i++];
    }
}

void msort(int ar[],int st,int en,int count[])
{
    if(st<en)
    {
        int mid=(st+en)/2;
        msort(ar,st,mid,count);
        msort(ar,mid+1,en,count);

        merge(ar,st,mid,en,count);
    }
}

int main()
{
    int count[1];
    count[0]=0;
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int ar[n];
    cout<<"Enter elements"<<endl;

    for(int x=0; x<n; x++)
    {
        cin>>ar[x];
    }
    msort(ar,0,n-1,count);
    cout<<endl;
    for(int x=0; x<n; x++)
    {
        cout<<ar[x]<<endl;
    }
    cout<<endl<<endl<<count[0];
    return 0;
}