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

class Stack
{
    public:
    node* top;

    Stack()
    {
        top=NULL;
    }

    bool isEmpty()
    {
        if(top==NULL)
        {
            return true;
        }
        return false;
    }

    void push(node* n)
    {
        if(top==NULL)
        {
            top=n;
        }
        else
        {
            node* temp=top;
            top=n;
            n->next=temp;
        }
    }

    node* pop()
    {
        if(top==NULL)
        {
            cout<<"Stack Underflow"<<endl;
            return NULL;
        }
        else
        {
            node* n=top;
            top=top->next;
            return n;
        }
    }

    node* peek()
    {
        if(top==NULL)
        {
            cout<<"Stack Underflow"<<endl;
            return NULL;
        }
        else
        {
            return top;
        }
    }

    int count()
    {
        int count=0;
        node* temp=top;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }

    void display()
    {
        if(top==NULL)
        {
            cout<<"Empty"<<endl;
        }
        else
        {
        cout<<"All values of stack are"<<endl;
        node* temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp=temp->next;
        }
        }
    }
};

int main()
{
    Stack s;
    int option,d;

    do
    {
        cout<<endl<<endl<<"Menu"<<endl<<endl;
        cout<<"1 - push()"<<endl;
        cout<<"2 - pop()"<<endl;
        cout<<"3 - isEmpty()"<<endl;
        cout<<"4 - peek()"<<endl;
        cout<<"5 - count()"<<endl;
        cout<<"6 - display()"<<endl;
        cout<<"7 - Clear Screen"<<endl;
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
            s.push(n);
            break;

            case 2:
            n=s.pop();
            cout<<"Top of stack is : "<<n->data<<endl;
            break;

            case 3:
            if(s.isEmpty())
            {
                cout<<"Stack is Empty"<<endl;
            }
            else
            {
                cout<<"Stack is not Empty"<<endl;
            }
            break;

            case 4:
            n=s.peek();
            cout<<"Top of stack is : "<<n->data<<endl;
            break;

            case 5:
            cout<<"Number of nodes : "<<s.count()<<endl;
            break;

            case 6:
            s.display();
            break;

            case 7:
            system("cls");
            break;

            default:
            cout<<"Invalid Input"<<endl;
        }

    } while (option!=0);
    
}