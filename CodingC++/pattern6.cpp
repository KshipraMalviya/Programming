#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int i=1;

    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=x; y++)
        {
            cout<<i++<<" ";
        }
        cout<<endl;
    }
}