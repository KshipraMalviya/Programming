#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=n; y++)
        {
            if((x+y)>=(n+1))
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