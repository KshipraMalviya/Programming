#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;
    int fact = 1;
    for (int x = n; x >= 1; x--)
    {
        fact = fact * x;
    }
    cout << fact;
    return 0;
}