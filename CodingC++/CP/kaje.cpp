#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 4)
        {
            int count = 0;
            int p = 0;
            int nex = 0;
            for (int x = 1; x <= n - 1; x++)
            {
                p |= x;
                nex = p | (x + 1);
                if (p == nex)
                    count++;
            }
            cout << count << endl;
        }
        else
        {
            int count=2;
            int p=4;
            for(int x=8; x<=n; x*=2)
            {
                count+=x-p-1;
                p=x;
            }
            count+=n-p-1;
            cout<<count<<endl;
        }
    }
    return 0;
}