#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int x=0; x<n; x+=2)
    {
        if(1<<x==n)
        {
            cout<<"power of 4"<<endl;
            return 0;
        }
    }
    cout<<"not power of 4"<<endl;
    return 0;
}