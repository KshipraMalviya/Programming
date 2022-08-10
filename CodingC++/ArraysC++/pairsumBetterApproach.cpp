#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter n : ";
    int n;
    cin>>n;
    int ar[n];
    for(int x=0; x<n; x++)
    {
        cout<<"Enter element "<<(x+1)<<" : ";
        cin>>ar[x];
    }
    for (int x = 0; x < n-1; x++)//SORTING
    {
        int min = ar[x];
        int i = x;
        for (int y = x+1; y < n; y++)
        {
            if (ar[y] < min)
            {
                i = y;
                min = ar[y];
            }
        }
        int t = ar[i];
        ar[i] = ar[x];
        ar[x] = t;
    }
    bool found=false;
    int st=0, en=n-1;
    cout<<"Enter sum : ";
    int s;
    cin>>s;
    while(st<en)
    {
        if(ar[st]+ar[en]<s)
        {
            st++;
        }
        else if(ar[st]+ar[en]>s)
        {
             en--;
        }
        else
        {
            found=true;
            cout<<ar[st]<<" "<<ar[en]<<endl;
            return 0;
        }
    }
    if(!found)
    {
        cout<<"Not found"<<endl;
    }

    return 0;
}