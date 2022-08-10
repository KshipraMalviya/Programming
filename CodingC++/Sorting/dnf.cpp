#include<iostream>
using namespace std;

void swap(int ar[],int a, int b)
{
    int t=ar[a];
    ar[a]=ar[b];
    ar[b]=t;
}

int main()
{
    int ar[]={1,1,2,0,0,1,2,2,1,0};
    int mid=0;
    int low=0;
    int high=9;
    while(mid<high)
    {
        if(ar[mid]==0)
        {
             swap(ar,low,mid);
             low++;
             mid++;
        }
        else if(ar[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(ar,mid,high);
            high--;
        }
    }
    for(int x=0; x<10; x++)
    {
        cout<<ar[x]<<endl;
    }
    return 0;
}