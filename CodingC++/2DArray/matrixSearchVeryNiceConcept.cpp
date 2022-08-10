#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter n and m : \n";
    cin>>n>>m;
    int ar[n][m];
    cout<<"Enter elements such that rows are sorted in increasing order and columns also :\n";
    for(int x=0; x<n; x++)
    {
        for(int y=0; y<m; y++)
        {
            cin>>ar[x][y];
        }
    }
    int r=0, c=m-1;
    bool found=false;
    cout<<"Enter number to be searched : ";
    int num;
    cin>>num;
    while(r<n && c<m)
    {
        if(ar[r][c]>num)
        {
            c--;
        }
        else if(ar[r][c]<num)
        {
            r++;
        }
        else
        {
            cout<<"Found at "<<r<<" , "<<c<<endl;
            found=true;
            return 0;
        }
    }
    cout<<"Not found"<<endl;


    return 0;
}