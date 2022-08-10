#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> dq1;
    dq1.push_back(1);
    dq1.push_back(2);
    dq1.push_front(3);
    dq1.push_front(4);
    dq1.push_back(5);
    dq1.push_back(6);
    
    while(!dq1.empty())
    {
        cout<<dq1.front()<<endl;
        dq1.pop_front();
    }

    cout<<"\n\n";

    deque<int> dq2;
    dq2.push_back(1);
    dq2.push_back(2);
    dq2.push_front(3);
    dq2.push_front(4);
    dq2.push_back(5);
    dq2.push_back(6);
    
    while(!dq2.empty())
    {
        cout<<dq2.back()<<endl;
        dq2.pop_back();
    }

    return 0;
}