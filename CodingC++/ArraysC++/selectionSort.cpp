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
    for (int x = 0; x < n-1; x++)
    {
        int min = ar[x];
        int i = x;
        for (int y = x+1; y < n; y++)
        {
            if (ar[y] < min)
            {
                i = y;
                min = ar[y];
            }
        }
        int t = ar[i];
        ar[i] = ar[x];
        ar[x] = t;
    }
    cout<<"\nSORTED ARRAY\n\n";
    for(int x=0; x<n; x++)
    {
        cout<<ar[x]<<endl;
    }

    return 0;
}