#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{

    /*string s;
    cout<<"Enter a string"<<endl;//without spaces
    cin>>s;
    cout<<s;*/

    /*string s1(5,'n'); //nnnnn
    cout<<s1<<endl;*/

    /*string str="abc";
    cout<<str<<endl;*/

    /* getline(cin, s);  //WITH SPACES
     cout<<s<<endl;*/

     string s1="fam"; 
     string s2="ily";
     /*s1.append(s2); //mutable strings
     cout<<s1<<endl;

     cout<<s1+s2<<endl;
     string s3=s1+s2;
     cout<<s3<<endl;*/

    /* cout<<s1[1]<<endl;
     string str="kjadn alkf lakd";
     str.clear();
     cout<<str;*/

     /*cout<<s2.compare(s1);

     string s3="abc";
     string s4="abc";

     if(s3.compare(s4)==0)// if(!s3.compare(s4)) since 0 means false also
     {
         cout<<"strings are equal"<<endl;
     }*/

     string str="ABC";
     for(int x=0; x<str.length(); x++)
     {
         string t=str;
         cout<<str.erase(x,1)<<"   "<<t[x]<<endl;
         str=t;

     }


     /*cout<<str.substr(6,3);*/

     /*str.insert(2,s1);
     cout<<str<<endl;
     str.insert(2,"hey");
     cout<<str<<endl;*/

     /*cout<<s1.size()<<endl;
     cout<<s1.length()<<endl;

     for(int x=0; x<str.length(); x++)
     {
         cout<<str[x]<<endl;
     }*/

     /*str.erase(3,4);
     cout<<str<<endl;*/


     /*str.clear();

     if(str.empty())
     {
         cout<<"String is empty"<<endl;
     }*/
    
    //cout<<str.find("de")<<endl;

    /*string st="786";
    int x=stoi(st);
    cout<<x<<endl;
    cout<<x+2<<endl;*/

    /*int x=786;

    cout<<to_string(x) + "2"<<endl;*/

   /* string ss="djfghiusdhiue";
    sort(ss.begin(), ss.end());
    cout<<ss<<endl;*/
    /*string t=str;
    str.erase(1,7);
    cout<<t<<endl;
    cout<<str<<endl;*/
   
    return 0;
}