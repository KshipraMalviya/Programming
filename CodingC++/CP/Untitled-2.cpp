#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    vector<int> nums={6,4,3,2,7,6,2};
    int x=0;
    auto it=nums.begin()+x+1;
                nums.erase(it);
                cout<<nums[x]<<" "<<nums[x+1]<<endl;

    return 0;
}