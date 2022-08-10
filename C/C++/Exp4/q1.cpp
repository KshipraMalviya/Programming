#include<iostream>
using namespace std;

bool check(int a[],int b[])
{
    for(int x=0; x<10; x++)
    {
        if(a[x]!=b[x])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a[10];
    int b[10];
    cout<<"Enter elements in array A"<<endl;
    for(int x=0; x<10; x++)
    {
        cin>>a[x];
    }
    cout<<"Enter elements in array B"<<endl;
    for(int x=0; x<10; x++)
    {
        cin>>b[x];
    }
    if(check(a,b)) cout<<"Equal Arrays"<<endl;
    else cout<<"Not Equal"<<endl;

    return 0;
}