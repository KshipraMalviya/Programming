#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ar[n];
    for(int x=0; x<n; x++)
    {
        cout<<"Enter element "<<(x+1)<<" : ";
        cin>>ar[x];
    }
    int min=ar[0];
    int max=ar[0];
    for(int x=1; x<n; x++)
    {
        if(ar[x]>max)
        {
            max=ar[x];
        }
        if(ar[x]<min)
        {
            min=ar[x];
        }
    }
    cout<<"Max = "<<max<<"\nMin = "<<min;

    return 0;
}