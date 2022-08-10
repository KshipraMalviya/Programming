#include<iostream>
using namespace std;

void findAll(int ar[], int n, int num)
{
     if(n>1)
     {
         findAll(ar,n-1,num);
         if(ar[n-1]==num)
         {
             cout<<n-1<<endl;
         }
     }
}

int findFirst(int ar[],int n,int i,int num)
{
    if(i==n)
    {
        return -1;
    }
    if(ar[i]==num)
    {
        return i;
    }
    else
    {
        return findFirst(ar,n,i+1,num);
    }
}

int findLast(int ar[],int n,int i,int num)
{
     if(i==n)
     {
         return -1;
     }
     int lastidx=findLast(ar,n,i+1,num);
     if(lastidx==-1)
     {
         if(ar[i]==num)
         {
             return i;
         }
         else
         {
             return -1;
         }
     }
     else
     {
         return lastidx;
     }
    
}

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    int ar[n];
    cout<<"Enter a number : ";
    int num;
    cin>>num;
    cout<<"Enter elements in the array"<<endl;
    for(int x=0; x<n; x++)
    {
        cin>>ar[x];
    }
    cout<<"\nAll ocurrences\n";
    findAll(ar,n,num);

    cout<<"\nFirst occurence\n";
    cout<<findFirst(ar,n,0,num);

    cout<<"\nLast occurence\n";
    cout<<findLast(ar,n,0,num)<<endl;
    return 0;
}