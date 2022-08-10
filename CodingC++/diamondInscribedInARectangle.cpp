#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int i = 1;
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= n - x; y++)
        {
            cout << "*";
        }

        cout << "*";
        if (x > 1)
        {
            for (int y = 1; y <= i; y++)
            {
                cout << " ";
            }
            i = i + 2;
            cout << "*";
        }
        for(int y=n+x; y<=2*n-1; y++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    int k = 2 * n - 3;
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= x - 1; y++)
        {
            cout << "*";
        }
        cout << "*";
        if (x != n)
        {
            for (int y = 1; y <= k; y++)
            {
                cout << " ";
            }
            k = k - 2;
            cout << "*";
        }
        for(int y=2*n+1-x ; y<=2*n-1; y++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}