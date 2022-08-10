#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter n"<<endl;
    int n;
    cin>>n;
    for(int x=1;x<=n; x++)
    {
        for(int y=1; y<=n-x; y++)
        {
             cout<<" ";
        }
        for(int y=1; y<=n; y++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}