#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int X, int Y)
    {
        x = X;
        y = Y;
    }
    friend double findDistance(Point A, Point B);
};

double findDistance(Point A, Point B)
{
    double d = pow(A.x - B.x, 2.0) + pow(A.y - B.y, 2.0);
    double ans = pow(d, 0.5);
    return ans;
}

int main()
{
    int x1, y1;
    cout << "Enter coordinates of 1st point" << endl;
    cin >> x1 >> y1;
    int x2, y2;
    cout << "Enter coordinates of 2nd point" << endl;
    cin >> x2 >> y2;
    Point p1(x1, y1);
    Point p2(x2, y2);
    double d = findDistance(p1, p2);
    cout << "Distance = " << d << endl;

    return 0;
}