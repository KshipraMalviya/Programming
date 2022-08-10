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
    cout<<"Enter sum : ";
    int sum;
    cin>>sum;
    bool found=false;
    for(int x=0; x<n; x++)
    {
        int a=x;
        int i=x;
        int s=0;
         while(s<sum)
         {
             s+=ar[i++];
         }
         if(s==sum)
         {
             found=true;
             cout<<++a<<" "<<i<<endl;
             return 0;
         }
    }
    if(!found)
    {
        cout<<"Not found "<<endl;
    }

    return 0;
}