#include<iostream>
using namespace std;

int val(int value[], int weight[], int w,int n)
{
    if(n==0 || w==0)
    {
        return 0;
    }
    if(weight[n-1]>w)
    {
        return val(value,weight,w,n-1);
    }
    else
    {
        return max(val(value,weight,w-weight[n-1],n-1)+value[n-1],val(value,weight,w,n-1));
    }
}

int main()
{
    int value[]={20,5,10,40,15,25};
    int weight[]={1,2,3,8,7,4};
    int w=10;
    int n=6;

    cout<<val(value,weight,w,n);

    return 0;
}