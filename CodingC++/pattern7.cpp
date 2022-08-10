#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=2*n; y++)
        {
            if(y<=x || y>(2*n)-x)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=(2*n); y++)
        {
            if(y<=(n+1-x) || (y-x)>=n)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"\t";
            }
        }
        cout<<endl;
    }

    return 0;
}