#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node()
    {
        data=0;
        next=NULL;
    }
    node(int d)
    {
        data=d;
        next=NULL;
    }
};

class CircularQueue
{
    public:
    node* front;
    node* rear;

    Queue()
    {
        front=NULL;
        rear=NULL;
    }

    bool isEmpty()
    {
        if(front==NULL && rear==NULL)
        {
            return true;
        }
        return false;
    }

    void enqueue(node* n)
    {
        if(front==NULL && rear==NULL)
        {
            front=n;
            rear=n;
            n->next=front;      //////
        }
        else
        {
            rear->next=n;
            rear=n;
            n->next=front;    //////////
        }
    }

    node* dequeue()
    {
        if(front==NULL && rear==NULL)
        {
            return NULL;
        }
        else
        {
            if(front==rear)
            {
                node* temp=front;
                front=rear=NULL;
                return temp;
            }
            else
            {
                node* f=front;
                front=front->next;
                rear->next=front;          //////////
                return f;
            }
        }
    }

    int count()
    {
        if(front==NULL && rear==NULL)
        {
            return 0;
        }
        int count=0;
        node* temp=front;
        do
        {
            count++;
            temp=temp->next;
        }while(temp!=front);

        return count;
    }

    void display()
    {
        if(front==NULL && rear==NULL)
        {
            cout<<"Empty Queue"<<endl;
        }
        else
        {
        cout<<"All values of queue are"<<endl;
        node* temp=front;
        while(temp!=rear)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        cout<<rear->data<<endl;
        }
    }
};

int main()
{
    CircularQueue q;
    int option,d;

    do
    {
        cout<<endl<<endl<<"Menu"<<endl<<endl;
        cout<<"1 - enqueue()"<<endl;
        cout<<"2 - dequeue()"<<endl;
        cout<<"3 - isEmpty()"<<endl;
        cout<<"4 - count()"<<endl;
        cout<<"5 - display()"<<endl;
        cout<<"6 - Clear Screen"<<endl;
        cout<<endl<<"Enter your choice.Enter 0 to exit."<<endl;
        cin>>option;

        node* n=new node();

        switch(option)
        {
            case 0:
            break;

            case 1:
            cout<<"Enter value of node to push in the stack"<<endl;
            cin>>d;
            n->data=d;
            q.enqueue(n);
            break;

            case 2:
            n=q.dequeue();
            if(n!=NULL)
            cout<<"Top of queue is : "<<n->data<<endl;
            else
            cout<<"Empty Queue"<<endl;
            delete n;
            break;

            case 3:
            if(q.isEmpty())
            {
                cout<<"Queue is Empty"<<endl;
            }
            else
            {
                cout<<"Queue is not Empty"<<endl;
            }
            break;

            case 4:
            cout<<"Number of values : "<<q.count()<<endl;
            break;

            case 5:
            q.display();
            break;

            case 6:
            system("cls");
            break;

            default:
            cout<<"Invalid Input"<<endl;
        }

    } while (option!=0);
    
}