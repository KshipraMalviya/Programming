#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int* aptr=&a;

    cout<<a<<endl;
    cout<<*aptr<<endl;
    cout<<aptr<<endl;
    cout<<&a<<endl;
    *aptr=20;
    cout<<a<<endl;


    int ar[]={10,20,30,40};
    cout<<*ar<<endl;

    int *ptr=ar;
    for(int i=0; i<3; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }

    for(int x=0; x<3; x++)
    {
        cout<<*(ar+x)<<endl;     //ar++ is illegal, gives error
    }

    return 0;
}