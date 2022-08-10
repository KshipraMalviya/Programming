#include<iostream>
using namespace std;

/*void increment(int a)
{
    a++;
}

int main()
{                   //this is PASS BY VALUE
    int a=2;
    increment(a);
    cout<<a<<endl;//prints 2

    return 0;
}*/

void swap(int *a,int *b)   //PASS BY REFERENCE
{
    int t=*a;
    *a=*b;
    *b=t;
}

int main()
{
    int a=2;
    int b=4;
    int* aptr=&a;
    int* bptr=&b;

    swap(aptr,bptr);// or swap(&a,&b);
    cout<<a<<" "<<b<<endl;

    return 0;
}