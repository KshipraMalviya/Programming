#include<iostream>
using namespace std;

void printInc(int n)
{
    cout<<n;
    if(n>1)
    {
        printInc(n-1);
    }
}

void printDec(int n)
{
    if(n>1)
    {
        printDec(n-1);
    }
    cout<<n;
}

int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;

    printInc(n);
    cout<<endl;
    printDec(n);

    return 0;
}