#include<iostream>
using namespace std;

void swap(int ar[],int i,int x)
{
    int t=ar[x];
    ar[x]=ar[i];
    ar[i]=t;
}

int partition(int ar[],int st,int en)
{
    int pivot=ar[en];
    int i=st-1;
    for(int x=st; x<en; x++)
    {
        if(ar[x]<pivot)
        {
            i++;
            swap(ar,x,i);
        }
    }
    swap(ar,i+1,en);
    return i+1;
}

void QuickSort(int ar[], int st, int en)
{
    if(st<en)
    {
        int pi=partition(ar,st,en);

        QuickSort(ar,st,pi-1);
        QuickSort(ar,pi+1,en);
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
    QuickSort(ar,0,n-1);
    cout<<endl;
    for(int x=0; x<n; x++)
    {
        cout<<ar[x]<<endl;
    }

    return 0;
}