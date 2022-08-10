#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[3][3];
    int i=1;
    for(int x=0; x<3; x++)
    {
        for(int y=0; y<3; y++)
        {
            ar[x][y]=i++;
        }
    }
    for(int x=0; x<3; x++)
    {
        for(int y=0; y<3; y++)
        {
            cout<<ar[x][y]<<" ";
        }
        cout<<endl;
    }
    for(int x=0; x<3; x++)
    {
        for(int y=x; y<3; y++)
        {
            int t=ar[x][y];
            ar[x][y]=ar[y][x];
            ar[y][x]=t;
        }
    }
    for(int x=0; x<3; x++)
    {
        for(int y=0; y<3; y++)
        {
            cout<<ar[x][y]<<" ";
        }
        cout<<endl;
    }

    return 0;
}