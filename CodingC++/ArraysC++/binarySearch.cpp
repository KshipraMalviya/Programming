#include<iostream>
using namespace std;

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
    int num;
    cout<<"Enter number to be searched : ";
    cin>>num;
    int min=0;
    int max=n-1;
    int mid=(min+max)/2;
    bool found=false;
    while(max>=min)
    {
        if(ar[mid]==num)
        {
            found=true;
            cout<<"Found at "<<mid;
            break;
        }
        else if(ar[mid]>num)
        {
            max=mid-1;
            mid=(min+max)/2;
        }
        else
        {
            min=mid+1;
            mid=(min+max)/2;
        }
    }
    if(!found)
    {
        cout<<"Not found";
    }

    return 0;
}