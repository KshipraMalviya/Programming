#include<iostream>
using namespace std;

int main()
{
    int ar[]={2000,500,200,100,50,20,10,5,2,1};
    int n;
    cin>>n;
    int i=0;
    int count=0;
    while(n!=0)
    {
        if(ar[i]<=n)
        {
            int d=n/ar[i];
            cout<<ar[i]<<" x "<<d<<" = "<<(ar[i]*d)<<endl;
            n=n%(d*ar[i]); 
            count+=d;
        }
        i++;
    }
    cout<<"Number of denominations : "<<count<<endl;

    return 0;
}