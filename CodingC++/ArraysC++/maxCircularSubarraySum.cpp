#include<iostream>
// USE   #include<limits>   for INT_MIN
using namespace std;

int kadane(int ar[], int n)
{
    int maxSum=0;
    int sum=0;
    for(int x=0; x<n; x++)
    {
        sum+=ar[x];
        if(sum<0)
        {
            sum=0;
        }
        maxSum=max(sum,maxSum);

    }
    return maxSum;
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int ar[n];
    for(int x=0; x<n; x++)
    {
        cout<<"Enter element "<<(x+1)<<" : ";
        cin>>ar[x];
    }
    int wrapsum, nonwrapsum;
    nonwrapsum=kadane(ar,n);
    int totalsum=0;
    for(int x=0; x<n; x++)
    {
        totalsum+=ar[x];
        ar[x]*=-1;
    }
    wrapsum=totalsum+kadane(ar,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;

    return 0;
}