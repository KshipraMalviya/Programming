#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=x; y++)
        {
            if((x+y)%2==0)
            {
                cout<<"1\t";
            }
            else
            {
                cout<<"0\t";
            }
        }
        cout<<endl;
    }

    return 0;
}