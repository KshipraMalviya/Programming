#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    int ar[n];
    for(int x=0; x<n; x++)
    {
        cout<<"Enter element "<<(x+1)<<" : ";
        cin>>ar[x];
    }
    int ans=2;
    int pd=ar[1]-ar[0];
    int currentlength=2;
    int j=2;
    while(j<n)
    {
       if( pd==(ar[j]-ar[j-1]))
       {
           currentlength++;
       }
       else
       {
           pd=ar[j]-ar[j-1];
           currentlength=2;
       }
       ans=max(ans,currentlength);
       j++;
    }
    cout<<ans;

    return 0;
}