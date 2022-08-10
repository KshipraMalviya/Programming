#include <iostream>
#include <string>
using namespace std;

void remove(string s, int i)
{
    if (i < s.length())
    {
        if (s[i] != s[i + 1])
        {
            cout << s[i];
        }
        remove(s, i + 1);
    }
}

int main()
{
    string s;
    cout << "Enter a string" << endl;
    cin >> s;
    remove(s, 0);

    return 0;
}