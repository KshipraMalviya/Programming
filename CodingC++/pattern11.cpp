#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= n; y++)
        {
            if ((x + y) > n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        if (x > 1)
        {
            for (int y = 1; y < n; y++)
            {
                if ((x - y) > 0)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    for(int x=1; x<=n; x++)
    {
        for(int y=1; y<=n; y++)
        {
            if((y-x)>=0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for(int y=1; y<n; y++)
        {
            if((x+y)<=n)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}