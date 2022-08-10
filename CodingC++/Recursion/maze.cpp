#include<iostream>
using namespace std;

int path(int n,int m, int i, int j)
{
    if((i==n-1) && (j==m-1))
    {
        return 1;
    }
    else if(i>n-1 || j>m-1)
    {
        return 0;
    }
    else
    {
        return path(n,m,i+1,j)+path(n,m,i,j+1);
    }
}

int main()
{
    cout<<"Enter n and m : "<<endl;
    int n;
    cin>>n;
    int m;
    cin>>m;
    cout<<path(n,m,0,0);

    return 0;
}