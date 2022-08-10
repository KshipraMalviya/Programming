#include <iostream>
using namespace std;

int main()
{
    int ar[] = {12, 18, 20, 42, 8, 10};
    int n;
    cout << "Enter number to be searched : ";
    cin >> n;
    bool found = false;
    for (int x = 0; x < 6; x++)
    {
        if (ar[x] == n)
        {
            cout << x;
            found = true;
        }
    }
    if (!found)
    {
        cout << -1;
    }
    return 0;
}