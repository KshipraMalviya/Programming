#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter m and n "<<endl;
    cin>>m>>n;
    for(int x=1; x<=m; x++)
    {
        for(int y=1; y<=n; y++)
        {
            if(x==1||x==m || y==1 || y==n)
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