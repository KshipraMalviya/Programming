#include<iostream>
using namespace std;

bool isPerfect(int n)
{
    int sum=0;
    for(int x=1; x<=n/2; x++)
    {
        if(n%x==0)
        {
            sum+=x;
        }
    }
    if(sum==n)
    {
        return true;
    }
    return false;
}

int maxPerfect(int ar[],int n,int k)
{
    int st=0;
    int cnt=0;
    int ans=0;
    for(int x=0; x<n; x++)
    {
        if(x-st<k)
        {
            if(isPerfect(ar[x]))
            {
                cnt++;
            }
        }
        else
        {
            ans=max(ans,cnt);
            if(isPerfect(ar[st]))
            {
                cnt--;
            }
            st++;
            if(isPerfect(ar[x]))
            {
                cnt++;
                ans=max(ans,cnt);
            }
        }
    }
    return ans;
}

int main()
{
    int ar[]={6,6,3,4,5,6};
    int n=6;
    int k=3;

    cout<<maxPerfect(ar,n,k)<<endl;

    return 0;
}