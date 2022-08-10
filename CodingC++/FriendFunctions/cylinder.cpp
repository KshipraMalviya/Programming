#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class Cylinder
{
private:
    double r,h;
public:
    Cylinder(double R, double H)
    {
        r=R;
        h=H;
    }
    double Volume()
    {
        return 3.14*r*r*h;
    }
    double baseArea()
    {
        return 3.14*r*r;
    }
    double surfaceArea()
    {
        return (2*3.14*r*h+2*3.14*r*r);
    }
};

int main()
{
    int r,h;
    cout<<"Enter radius and height"<<endl;
    cin>>r>>h;
    Cylinder c(r,h);
    cout<<"Volume = "<<c.Volume()<<endl;
    cout<<"Base Area = "<<c.baseArea()<<endl;
    cout<<"Surface Area = "<<c.surfaceArea()<<endl;

    return 0;
}