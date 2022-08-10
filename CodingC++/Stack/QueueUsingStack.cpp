#include<iostream>
#include<stack>

using namespace std;

class Queue
{
    public:
    stack<int>s1;
    stack<int>s2;
    void enqueue(int val)
    {
        s1.push(val);
    }
    void transfer()
    {
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
    }
    int dequeue()
    {
        if(s2.empty())
        {
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        int t=s2.top();
        s2.pop();
        return t;
    }
    void isEmpty()
    {
        if(s2.empty())
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Queue is not empty"<<endl;
    }
};

int main()
{
    Queue q;
    q.isEmpty();

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.transfer();
    q.isEmpty();

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    return 0;
}