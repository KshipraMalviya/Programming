#include<iostream>
using namespace std;
int main()
{
    int saving;
    cin>>saving;
    if(saving> 5000)
    {
        if(saving>10000)
        {
            cout<<"RoadTrip with neha";
        }
        else
        {
            cout<<"Shopping with neha";
        }
    }
    else if(saving>2000)
    {
        cout<<"Rashmi";
    }
    else
    {
        cout<<"Friends";
    }

    return 0;
}
