#include<iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n&(1<<pos))!=0);
}

int main()
{
    int ar[]={2,4,6,7,4,5,6,2};
    int xorsum=0;
    for(int x=0; x<8; x++)
    {
        xorsum=xorsum^ar[x];
    }
    int setbit=0;
    int pos=0;
    int temp=xorsum;
    while(setbit!=1)
    {
        setbit=xorsum&1;
        pos++;
        xorsum=xorsum>>1;
    }

    int newxor=0;
    for(int x=0; x<8; x++)
    {
        if(getBit(ar[x],(pos-1)))
        {
            newxor=newxor^ar[x];
        }
    }
    cout<<newxor<<endl;
    cout<<(newxor^temp)<<endl;

    return 0;
}