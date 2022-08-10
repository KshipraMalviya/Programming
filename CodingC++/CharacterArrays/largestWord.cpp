#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cin.ignore();
    char ar[n+1];
    cout<<"Enter sentence : "<<endl;
    cin.getline(ar, n);
    cin.ignore();
     int st=0, en=-1;
     int maxLen=-1;
     int len=0;
    for(int x=0; x<n+1; x++)
    {
        if(ar[x]==' ')
        {
            en=x;
            len=en-st;
            st=en+1;

            maxLen=max(maxLen,len);
        }
        if(ar[x]=='\0')
        {
            en=x;
            len=en-st;
            maxLen=max(maxLen,len);
        }
    }
        
        cout<<maxLen<<endl;
     
    return 0;
}