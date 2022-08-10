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
    for (int x = 0; x < n; x++)
    {
        for (int i = x; i < n; i++)
        {
            int sum=0;
            for (int y = x; y <= i; y++)
            {
                sum=sum+ar[y];
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}