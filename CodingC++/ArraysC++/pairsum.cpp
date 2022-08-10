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
    cout<<"Enter sum : ";
    int k;
    cin>>k;
    for(int x=0; x<n-1; x++)
    {
        for(int y=x+1; y<n; y++)
        {
            int sum=ar[x]+ar[y];
            if(sum==k)
            {
                cout<<x<<" "<<y<<endl;
                cout<<"Found"<<endl;
                return 0;
            }
        }
    }
    cout<<"Not found"<<endl;

    return 0;
}
