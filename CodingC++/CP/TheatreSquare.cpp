#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    int count=0;
    while (m > 0 && n > 0)
    {
        n = n - a;
        m = m - a;
        count++;
    }

    cout<<count<<endl;

    return 0;
}