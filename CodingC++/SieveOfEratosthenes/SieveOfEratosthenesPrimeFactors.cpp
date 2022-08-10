#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n :";
    cin>>n;
    int ar[n+1];
    int ar2[n+1];
    for(int x=0; x<n+1; x++)
    {
        ar[x]=x;
    }
    for(int x=0; x<n+1; x++)
    {
        ar2[x]=x;
    }
    ar[0]=ar[1]=0;
    for(int x=2; x<=(int)sqrt(n); x++)
    {
        if(ar[x]!=0)
        {
            for(int y=x*x; y<n+1; y+=x)
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
        cout<<spf<<" "<<endl;
        num=num/spf;
    }


    return 0;
}