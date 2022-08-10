#include<iostream>
using namespace std;

int maxSum(int ar[], int k,int m, int n)
{
    if(k>n)
    {
        return -1;
    }
    int ans=-1;
    int st=0;
    int sum=0;
    for(int x=0; x<n; x++)
    {
        if(x-st<k-1)
        {
            sum+=ar[x];
        }
        else
        {
            sum+=ar[x];
            if(sum<m)
            {
                ans=max(ans,sum);
            }
            sum-=ar[st];
            st++;
        }

    }
    return ans;
}

int main()
{
    int ar[]={7,5,4,6,8,9};
    int k=3;
    int x=20;
    int n=6;
    cout<<maxSum(ar,k,x,n)<<endl;

    return 0;
}