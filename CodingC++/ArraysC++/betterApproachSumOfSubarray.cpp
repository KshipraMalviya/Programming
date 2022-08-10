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
    for(int x=0; x<n; x++)
    {
        int sum=0;
        for(int y=x; y<n; y++)//CUMULATIVE SUM APPROACH
        {
            sum+=ar[y];
            cout<<sum<<endl;
        }
    }
    return 0;
}