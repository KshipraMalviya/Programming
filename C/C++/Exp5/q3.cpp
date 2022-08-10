#include<iostream>
using namespace std;

int main()
{
    int num[20];
    cout<<"Enter elements\n";
    int *ptr=num;
    for(int x=0; x<19; x++)
    {
        cin>>*(ptr+x);
    }
    cout<<"Output Array"<<endl;
    for(int x=0; x<19; x++)
    {
        cout<<*(ptr+x)<<" ";
    }

    return 0;
}