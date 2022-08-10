#include <iostream>
#include <string>
using namespace std;

bool palin(int n)
{
    int r=0;
    int t=n;
    while(t!=0)
    {
        int d=t%10;
        r=r*10+d;
        t=t/10;
    }
    if(r==n)
    {
        return true;
    }
    return false;
}

int formNum(int ar[], int n, int k)
{
    string s = "";
    int st = 0;
    for (int x = 0; x < n; x++)
    {
        if (x - st < k)
        {
            string str=to_string(ar[x]);
            s += str;
        }
        else
        {
            int num=std::stoi(s);
            if (palin(num))
            {
                return num;
            }
            int cnt = 0;
            int t = ar[st];
            while (t != 0)
            {
                t = t / 10;
                cnt++;
            }
            s=s.substr(cnt);
            st++;
            x--;
        }
    }
    int num=std::stoi(s);
    if (palin(num))
    {
        return num;
    }
    return -1;
}

int main()
{
    int ar[] = {2,3, 3, 2, 5, 1, 1, 5};
    int n = 8;
    int k = 4;
    cout << formNum(ar, n, k) << endl;

    return 0;
}