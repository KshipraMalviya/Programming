#include<iostream>
using namespace std;

bool checkSort(int ar[],int n)
{
    if(n==1)
    {
        return true;
    }
    else
    {
        return ((ar[n-1]>ar[n-2]) && checkSort(ar,n-1));
    }
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ar[n];
    cout<<"Enter elements of array"<<endl;
    for(int x=0; x<n; x++)
    {
        cin>>ar[x];
    }
    if(checkSort(ar,n))
    {
        cout<<"Sorted"<<endl;
    }
    else
    {
        cout<<"Not sorted"<<endl;
    }

    return 0;
}