#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ar[n+1];
    for(int x=0; x<n+1; x++)
    {
        ar[x]=x;
    }
    ar[0]=ar[1]=0;
    for(int x=2; x<=(int)sqrt(n); x++)
    {
        if(ar[x]!=0)
        {
            for(int y=x*x; y<n+1; y+=x)
            {
                ar[y]=0;
            }
        }
    }
    for(int x=0; x<n+1; x++)
    {
        if(ar[x]!=0)
        {
            cout<<ar[x]<<endl;
        }
    }
    

    return 0;
}