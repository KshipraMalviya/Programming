#include<bits/stdc++.h>
using namespace std;

int convertTime(string current, string correct)
{
    int a = current[0];
    int b = current[1];
    string op1(1, a);
    string op2(1, b);
    string s = op1 + op2;
    int n1 = stoi(s);
    int c = current[3];
    int d = current[4];
    string op11(1, c);
    string op22(1, d);
    string s1 = op11 + op22;
    int m1 = stoi(s1);

    int a2 = correct[0];
    int b2 = correct[1];
    string op3(1, a2);
    string op4(1, b2);
    string s3 = op3 + op4;
    int a22 = correct[3];
    int b22 = correct[4];
    string op5(1, a22);
    string op6(1, b22);
    string s4 = op5 + op6;
    int n2 = stoi(s3);
    int m2 = stoi(s4);

    int diff = n2 * 60 + m2 - n1 * 60 - m1;
    cout<<diff<<endl;

    int ar[] = {60, 15, 5, 1};
    int count = 0;
    int i = 0;
    while (diff != 0 && i < 4)
    {
        if (diff >= ar[i])
        {
            while(diff >= ar[i])
            {
                diff-=ar[i];
                count++;
            }
        }
        i++;
    }
    return count;
}

int main()
{
    cout<<convertTime("02:30","04:35")<<endl;

    return 0;
}