#include<iostream>
#include<climits>
using namespace std;

int smallestSubarray(int ar[],int m, int n)
{
    int st=0;
    int sum=0;
    int ans=INT_MAX;
    for(int x=0; x<n; x++)
    {
        sum+=ar[x];
        if(sum>m)
        {
            while(sum>m)
            {
                ans=min(ans,x-st+1);
                sum-=ar[st];
                st++;
            }
        }
    }
    return ans;
}

int main()
{
    int ar[]={1,4,45,6,10,19};
    int x=51;
    int n=6;
    cout<<smallestSubarray(ar,x,n)<<endl;

    return 0;
}