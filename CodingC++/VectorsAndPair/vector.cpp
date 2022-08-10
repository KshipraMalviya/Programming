#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int x=0;x<v.size();x++)
    {
        cout<<v[x]<<endl;
    }//1 2 3
     vector<int>::iterator it;
     it=v.begin()+1;
    v.erase(it); 

    for(int x=0;x<v.size();x++)
    {
        cout<<v[x]<<endl;
    }

/*    //THE ABOVE CAN BE DONE AS WRITTEN BELOW

    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<endl;
    }//1 2 3 

    //THE ABOVE CAN BE DONE AS WRITTEN BELOW

    for(auto element:v)
    {
        cout<<element<<endl;
    }//1 2 3 
    v.pop_back(); //1 2

    vector<int>v2(3,50);
    // 50 50 50

    swap(v,v2);
    sort(v.begin(),v.end());*/

    return 0;
}