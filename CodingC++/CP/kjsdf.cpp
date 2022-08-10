#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        if (abs(a - b) > 2)
            cout << "0" << endl;
        else if(a==b) cout<<"0"<<endl;
        else
        {
            if (abs(a - b) == 1)
            {
                int count = 0;
                if (min(a, b) > 1)
                {
                    count++;
                }
                if (max(a, b) < n)
                {
                    count++;
                }
                cout << count << endl;
            }
            else if (abs(a - b) == 2)
                cout << "1" << endl;
        }
    }

    return 0;
}