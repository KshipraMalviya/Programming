#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    int ar[n];
    for(int x=0; x<n; x++)
    {
        cout<<"Enter element "<<(x+1)<<" : ";
        cin>>ar[x];
    }
    int arr[n-1];
    int i=0;
    for(int x=0; x<n-1; x++)
    {
        int diff=ar[x+1]-ar[x];
        arr[i++]=diff;
    }
    int ar2[n-1];
    for(int x=0; x<n-1; x++)
    {
        ar2[x]=0;
    }
    int p=0;
    int count=1;
    for(int x=0; x<n-1; x++)
    {
        if(arr[x]==arr[x+1])
        {
             count++;
        }
        else
        {
            ar2[p++]=count;
            count=1;
        }
    }
    int max=ar2[0];
    for(int x=1; x<n-1; x++)
    {
        if(ar2[x]>max)
        {
            max=ar2[x];
        }
    }
    cout<<"\n\nLongest Arithmetic Subarray is of length : "<<(max+1)<<"\n\n";

    return 0;
}