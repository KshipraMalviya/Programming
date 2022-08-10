#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int ar[n];
    for (int x = 0; x < n; x++)
    {
        cout << "Enter element " << (x + 1) << " : ";
        cin >> ar[x];
    }
    for (int x = 0; x < n - 1; x++)
    {
        for (int y = 0; y < n - x - 1; y++)
        {
            if (ar[y] > ar[y + 1])
            {
                int t = ar[y];
                ar[y] = ar[y + 1];
                ar[y + 1] = t;
            }
        }
    }
    cout << "\nSORTED ARRAY\n\n" ;
    for (int x = 0; x < n; x++)
    {
        cout << ar[x] << "  ";
    }

    return 0;
}