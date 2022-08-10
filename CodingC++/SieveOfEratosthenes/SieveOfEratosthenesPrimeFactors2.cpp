#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int ar[1001];
    int ar2[1001];
    for(int x=0; x<1001; x++)
    {
        ar[x]=x;
    }
    for(int x=0; x<1001; x++)
    {
        ar2[x]=x;
    }
    ar[0]=ar[1]=0;
    for(int x=2; x<=(int)sqrt(1000); x++)
    {
        if(ar[x]!=0)
        {
            for(int y=x*x; y<1001; y+=x)
            {
                if(ar[y]!=0)
                {
                    ar[y]=0;
                    ar2[y]=x;
                }
            }
        }
    }
    cout<<"Enter a number : ";
    int num;
    cin>>num;
    while(num!=1)
    {
        int spf=ar2[num];
        cout<<spf<<" ";
        num=num/spf;
    }


    return 0;
}