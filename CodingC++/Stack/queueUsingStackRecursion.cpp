#include<iostream>
#include<stack>

using namespace std;

class Queue
{
    public:
    stack<int>s;
    void enqueue(int val)
    {
        s.push(val);
    }
    int dequeue()
    {
        if(s.empty())
        {
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        int t=s.top();
        s.pop();
        if(s.empty())
        {
            return t;
        }
        int i=dequeue();
        s.push(t);
        return i;
    }
    void isEmpty()
    {
        if(s.empty())
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

    q.isEmpty();

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    return 0;
}