#include<iostream>
using namespace std;

class Distance
{
    private:
    int meters;
    public:
    Distance()
    {
        meter=0;
    }
    void displayData()
    {
        cout<<"Meters value : "<<meters;
    }
    friend void addValue(Distance &d);
};

void addValue(Distance &d)
{
    d.meters=d.meters+5;
}

int main()
{


    return 0;
}