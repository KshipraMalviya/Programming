#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers"<<endl;
    cin>>a>>b>>c;
    int maxOfTwo=(a>b)?a:b;
    int maxOfThree=(maxOfTwo>c)?maxOfTwo:c;
    cout<<"Largest Number = "<<maxOfThree<<endl;

    return 0;
}