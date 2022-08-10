#include<iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n&(1<<pos))!=0);
}

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    char ar[n+1];
    for(int x=0; x<n; x++)
    {
        cin>>ar[x];
    }
    for(int x=0; x<(1<<n) ; x++)
    {
         for(int y=0; y<n; y++)
         {
             int i=getBit(x,y);
             if(i==1)
             {
                 cout<<ar[n-1-y]<<"";
             }
         }
         cout<<endl;
    }

    return 0;
}