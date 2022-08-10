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
    cout<<"\n\n";
    int max=ar[0];
    cout<<max<<endl;
    for(int x=1; x<n; x++)
    {
        if(ar[x]>max)
        {
            max=ar[x];
        }
        cout<<max<<endl;
    }
    return 0;
}