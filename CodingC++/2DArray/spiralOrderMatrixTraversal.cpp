#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter n and m : ";
    cin>>n>>m;
    int ar[n][m];
    for(int x=0; x<n; x++)
    {
        for(int y=0; y<m; y++)
        {
            cout<<"Enter element at "<<x<<", "<<y<<endl;
            cin>>ar[x][y];
        }
    }
    int top=0, bottom=n-1, left=0, right=m-1;
    int direction=0;
    while(left<=right && top<=bottom)
    {
    if(direction==0)
    {
        for(int x=left; x<=right; x++)
        {
            cout<<ar[top][x]<<" ";
        }
        top++;
    }
    else if(direction==1)
    {
        for(int x=top; x<=bottom; x++)
        {
            cout<<ar[x][right]<<" ";
        }
        right--;
    }
    else if(direction==2)
    {
        for(int x=right; x>=left; x--)
        {
            cout<<ar[bottom][x]<<" ";
        }
        bottom--;
    }
    else
    {
        for(int x=bottom; x>=top; x--)
        {
            cout<<ar[x][left]<<" ";
        }
        left++;
    }
    direction=(direction+1)%4;
    }
    
    return 0;
}