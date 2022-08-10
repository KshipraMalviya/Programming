#include<iostream>
#include<string>

using namespace std;

void replace(string s, int i)
{
     if(i<s.length())
     {
         if(s[i]=='p'&& s[i+1]=='i')
         {
             cout<<"3.14";
             i=i+2;
         }
         else
         {
             cout<<s[i];
             i++;
         }
         replace(s,i);
     }
}

int main()
{
    string s="pippxxppiixipi";
    replace(s,0);

    return 0;
}