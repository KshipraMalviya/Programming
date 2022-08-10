#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class Point
{
private:
    double x, y, z;

public:
    Point(double X, double Y, double Z)
    {
        x = X;
        y = Y;
        z = Z;
    }
    friend Point findMidPoint(Point A, Point B);
    friend void display(Point p);
};

Point findMidPoint(Point A, Point B)
{
    double a = (A.x + B.x) / 2.0;
    double b = (A.y + B.y) / 2.0;
    double c = (A.z + B.z) / 2.0;
    Point P3(a, b, c);
    return P3;
}

void display(Point p)
{
    cout << "Midpoint = (" << p.x << "," << p.y << "," << p.z << ")" << endl;
}

int main()
{
    int x1, y1, z1;
    cout << "Enter coordinates of 1st point" << endl;
    cin >> x1 >> y1 >> z1;
    int x2, y2, z2;
    cout << "Enter coordinates of 2nd point" << endl;
    cin >> x2 >> y2 >> z2;
    Point p1(x1, y1, z1);
    Point p2(x2, y2, z2);
    Point p3 = findMidPoint(p1, p2);
    display(p3);

    return 0;
}