#include <iostream>
using namespace std;

bool isSafe(int ar[][], int x, int y, int n)
{
    if (x < n && y < n && ar[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratinMaze(int ar[][], int x, int y, int n, int solAr[][])
{
    if (x == n - 1 && y == n - 1)
    {
        solAr[x][y] = 1;
        return true;
    }
    if (isSafe(ar, x, y, n))
    {
        solAr[x][y] = 1;
        if (ratinMaze(ar, x + 1, y, n, solAr))
        {
            return true;
        }
        if (ratinMaze(ar, x, y + 1, n, solAr))
        {
            return true;
        }
    }
        solAr[x][y] = 0;
        return false;
    
}

int main()
{
    cout << "Enter n : ";
    int n;
    cin >> n;
    int ar[n][n];
    cout << "Enter elements " << endl;
    for (int x = 0; x < n; x++)
    {
        cout << x << endl;
        for (int y = 0; y < n; y++)
        {
            cin >> ar[x][y];
        }
    }
    int solAr[n][n];
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
        {
            solAr[x][y] = 0;
        }
    }
    if (ratinMaze(ar, 0, 0, n, solAr))
    {
        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < n; y++)
            {
                cout << solAr[x][y]<<" ";
            }
            cout<< endl;
        }
    }

    return 0;
}