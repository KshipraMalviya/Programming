#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b)
    {
        if(b==c)
        {
            cout<<"Equilateral";
        }
        else
        {
            cout<<"Isosceles";
        }
    }
    else
    {
        if(b==c)
        {
            cout<<"Isosceles";
        }
        else if(a==c)
        {
            cout<<"Isosceles";
        }
        else
        {
            cout<<"Scalene";
        }
    }


    return 0;
}