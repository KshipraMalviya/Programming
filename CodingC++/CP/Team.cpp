#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int count=0;
    for(int x=1; x<=n; x++)
    {
        int ar[3]; int count0,count1=0;
        for(int x=0; x<3; x++)
        {
            cin>>ar[x];
            if(ar[x]==0)
                count0++;
            else
                count1++;
        }
        if(count1>1)
            count++;
    }
    cout<<count;

    return 0;
}