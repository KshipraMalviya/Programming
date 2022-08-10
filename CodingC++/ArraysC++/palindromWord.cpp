#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    char ar[n+1];
    cout<<"Enter name : "<<endl;
    cin>>ar;
    for(int x=0; x<n/2; x++)
    {
        if(ar[x]!=ar[n-1-x])
        {
            cout<<"Not palindrome"<<endl;
            return 0;
        }
    }
    cout<<"Palindrome"<<endl;

    return 0;
}