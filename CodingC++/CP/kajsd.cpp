#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int tt = 1;
    while (t--)
    {
        string i;
        cin >> i;
        string o;
        cin >> o;
        map<char, int> m1;
        map<char, int> m2;
        for (int x = 0; x < i.size(); x++)
        {
            m1[i[x]]++;
        }
        for (int x = 0; x < o.size(); x++)
        {
            m2[o[x]]++;
        }
        auto it1 = m1.begin();
        auto it2 = m2.begin();
        bool f = 1;
        int ans = 0;
        while (it1 != m1.end() && it2 != m2.end())
        {
            if (it1->first == it2->first)
            {
                if (it1->second > it2->second)
                {
                    f = 0;
                    break;
                }
                else
                {
                    ans += it2->second - it1->second;
                }
                it1++;
                it2++;
            }
            else if (it1->first > it2->second)
            {
                while (it1->first > it2->second)
                {
                    it2++;
                    if (it2 == m2.end())
                    {
                        f = 0;
                        break;
                    }
                }
            }
            else // it1.first<it2.second
            {
                f = 0;
                break;
            }
        }
        if (f == 1 && it2 != m2.end())
        {
            while (it2 != m2.end())
            {
                ans++;
                it2++;
            }
        }
        if (it1 != m1.end())
        {
            cout << "Case #" << tt << ": IMPOSSIBLE" << endl;
        }
        else
        {
            if (f)
            {
                cout << "Case #" << tt << ": " << ans << endl;
            }
            else
            {
                cout << "Case #" << tt << ": IMPOSSIBLE" << endl;
            }
        }
        tt++;
    }

    return 0;
}