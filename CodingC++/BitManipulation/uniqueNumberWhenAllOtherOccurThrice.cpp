#include<iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n&(1<<pos))!=0);
}

int setBit(int n, int pos)
{
    return (n|(1<<pos));
}

int main()
{
    int ar[]={1,3,2,3,4,2,1,1,3,2};
    int result=0;
    for(int x=0; x<64; x++)
    {
        int sum=0;
        for(int y=0; y<10; y++)
        {
            if(getBit(ar[y],x))
            {
                sum++;
            }
        }
        if(sum%3!=0)
        {
            result=setBit(result,x);
        }
    }
    cout<<result<<endl;

    return 0;
}