#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int x=1; x<=2*n; x++)
    {
        for(int y=1; y<=2*n; y++)
        {
            if(y==1 || y==2*n || x==y || (x+y)==(2*n+1))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}