#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ar[n][n];
    for(int x=0; x<n; x++)
    {
        for(int y=0; y<n; y++)
        {
            cout<<"Enter element at "<<x<<" , "<<y<<" : ";
            cin>>ar[x][y];
        }
    }
    for(int x=0; x<n; x++)
    {
        for(int y=0; y<n; y++)
        {
            cout<<ar[y][x]<<" ";
        }
        cout<<endl;
    }

    return 0;
}