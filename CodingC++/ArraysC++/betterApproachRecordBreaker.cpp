#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int a[n];
    for(int x=0; x<n; x++)
    {
        cout<<"Enter number of visitors on day "<<(x+1)<<" : ";
        cin>>a[x];
    }
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    int ans=0;
    int mx=-1;
    for(int i=0; i<n; i++)
    {
        if(a[i]>mx && a[i]>a[i+1])
        {
            ans++;
        }
        mx=max(mx, a[i]);
    }
    cout<<ans;
    return 0;
}