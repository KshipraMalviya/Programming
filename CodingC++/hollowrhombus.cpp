#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=n-x; y++)
        {
            cout<<" ";
        }
        cout<<"*";
        if(x==1 || x==n)
        {
            for(int y=1; y<=n-1; y++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(int x=1; x<=n-2; x++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}