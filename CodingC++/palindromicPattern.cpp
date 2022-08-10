#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    for (int x = 1; x <= n; x++)
    {
        int a = x;
        for (int y = 1; y <= n; y++)
        {
            if ((x + y) >= n + 1)
            {
                cout << a--<<"\t";
            }
            else
            {
                cout << "\t";
            }
        }
        
        if (x > 1)
        {
            int i=2;
            for (int y = 1; y <= n - 1; y++)
            {
                if(x-y>0)
                {
                    cout<<i++<<"\t";
                }
                else
                {
                    cout<<"\t";
                }
            }
        }
        cout << endl;
    }

    return 0;
}