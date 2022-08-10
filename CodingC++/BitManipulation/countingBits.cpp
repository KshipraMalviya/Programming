#include<iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n&(1<<pos))!=0);
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    

    return 0;
}