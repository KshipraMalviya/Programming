#include <iostream>
#include <string>
using namespace std;

int formNum(int ar[], int n, int k)
{
    string s = "";
    int sum = 0;
    int st = 0;
    for (int x = 0; x < n; x++)
    {
        if (x - st < k)
        {
            string str=to_string(ar[x]);
            s += str;
            int t = ar[x];
            while (t != 0)
            {
                int d = t % 10;
                sum += d;
                t = t / 10;
            }
        }
        else
        {
            if (sum % 3 == 0)
            {
                int num=std::stoi(s);
                return num;
            }
            int cnt = 0;
            int t = ar[st];
            int sum1=0;
            while (t != 0)
            {
                int d=t%10;
                sum1+=d;
                t = t / 10;
                cnt++;
            }
            s=s.substr(cnt);
            sum-=sum1;
            st++;
            x--;
        }
    }
    if (sum % 3 == 0)
    {
        int num=std::stoi(s);
        return num;
    }
    return -1;
}

int main()
{
    int ar[] = {8, 23, 45, 12, 56, 4};
    int n = 6;
    int k = 3;
    cout << formNum(ar, n, k) << endl;

    return 0;
}