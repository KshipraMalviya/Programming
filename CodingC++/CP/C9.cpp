#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int tt = 1;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int t = n;
        int ans = 0;
        while (n != 0)
        {
            sum += n % 10;
            n /= 10;
        }
        if (t % 9 == 0)
        {
            string s = to_string(t);
            string str = "";
            int p = 0;
            string op1(1, s[0]);
            str = str + op1;
            string op2(1, '0');
            str = str + op2;
            for (int x = 1; x < s.size(); x++)
            {
                string op(1, s[x]);
                str = str + op;
            }
            cout << "Case #" << tt << ": " << str << endl;
        }
        else
        {
            int i = sum / 9;
            i++;
            int diff = i * 9 - sum;
            string st = to_string(t);
            reverse(st.begin(), st.end());
            int l = st.size();
            n = stoi(st);
            int pp = 0;
            while (n != 0 && n % 10 <= diff)
            {
                pp++;
                n /= 10;
            }
            int pos = l - pp;
            string s1 = "";
            int c = 0;
            int ip = 0;
            while (c != l + 1)
            {
                if (c == pos)
                {
                    s1 = s1 + to_string(diff);
                }
                else
                {
                    string op(1, st[ip++]);
                    s1 = s1 + op;
                }
                c++;
            }
            reverse(s1.begin(), s1.end());
            cout << "Case #" << tt << ": " << s1 << endl;
        }

        tt++;
    }

    return 0;
}