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
    for(int x=0; x<n; x++)
    {
        for(int i=x; i<n; i++)
        {
            for(int y=x; y<=i; y++)
            {
                cout<<ar[y];
            }
        cout<<endl;
        }
    }

    return 0;
}