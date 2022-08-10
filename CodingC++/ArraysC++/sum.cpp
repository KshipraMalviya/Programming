#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    int ar[n];
    int sum=0;
    for(int x=0; x<n; x++)
    {
        cout<<"Enter element "<<(x+1)<<" : ";
        cin>>ar[x];
        sum+=ar[x];
    }
    cout<<"Sum = "<<sum;
    return 0;
}