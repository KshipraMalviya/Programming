#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter m and n "<<endl;
    cin>>m>>n;
    int ar[m][n];
    for(int x=0; x<m; x++)
    {
        for(int y=0; y<n; y++)
        {
            cout<<"Enter element at "<<x<<", "<<y<<" : ";
            cin>>ar[x][y];
        }
    }
    int num;
    cout<<"Enter number to be searched : ";
    cin>>num;
    for(int x=0; x<m; x++)
    {
        for(int y=0; y<n; y++)
        {
            if(ar[x][y]==num)
            {
                cout<<"Found at "<<x<<" , "<<y<<endl;
                return 0;
            }
        }
    }
    cout<<"Not found"<<endl;

    return 0;
}