#include <iostream>
#include <new>
using namespace std;

int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;
    int *p;
    try
    {
        p = new int[n];
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation Failed" << endl;
        return 1;
    }
    cout << "Enter elements in the array" << endl;
    for (int x = 0; x < n; x++)
    {
        cin >> p[x];
    }
    for (int x = 0; x < n; x++)
    {
        try
        {
            if (p[x] == 0)
            {
                throw 0;
            }
            cout << (100 / p[x]) << endl;
        }
        catch (int x)
        {
            cout << "Can't divide by zero" << endl;
        }
    }

    return 0;
}