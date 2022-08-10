#include <iostream>
#include <string>

using namespace std;

class Stack
{
private:
    int top;
    int ar[5];

public:
    Stack()
    {
        top=-1;
        for(int x=0; x<5; x++)
        {
            ar[x]=0;
        }
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        return false;
    }

    bool isFull()
    {
        if(top==4)
        {
            return true;
        }
        return false;
    }

    void push(int val)
    {
        if(isFull())
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            top++;
            ar[top]=val;
            cout<<"Pushed"<<endl;
        }
    }

    int pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
            return 0;
        }
        else
        {
            int val= ar[top];
            ar[top]=0;
            top--;
            return val;
        }
    }

    int count()
    {
        return (top+1);
    }

    int peek(int pos)
    {
        if(top==-1)
        {
            cout<<"Stack underflow"<<endl;
            return 0;
        }
        return ar[pos];
    }

    void change(int pos,int val)
    {
        ar[pos]=val;
        cout<<"Value changed"<<endl;
    }

    void display()
    {
        cout<<"All values of stack are : "<<endl;
        for(int x=4; x>=0; x--)
        {
            cout<<ar[x]<<endl;
        }
    }
};

int main()
{
    Stack s;
    int option, position, value;
    do
    {
        cout<<"Menu"<<endl<<endl;
        cout<<"1 - push()"<<endl;
        cout<<"2 - pop()"<<endl;
        cout<<"3 - isEmpty()"<<endl;
        cout<<"4 - isFull()"<<endl;
        cout<<"5 - count()"<<endl;
        cout<<"6 - peek()"<<endl;
        cout<<"7 - change()"<<endl;
        cout<<"8 - display()"<<endl;
        cout<<"9 - clear screen()"<<endl;
        cout<<endl<<"Enter your choice. Enter 0 to exit."<<endl;
        cin>>option;

        switch(option)
        {
            case 0:
            break;

            case 1:
            cout<<"Enter value to be pushed"<<endl;
            cin>>value;
            s.push(value);
            break;

            case 2:
            cout<<"Topmost value is : "<<s.pop()<<endl;
            break;

            case 3:
            if(s.isEmpty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<"Not empty"<<endl;
            }
            break;

            case 4:
            if(s.isFull())
            {
                cout<<"Full"<<endl;
            }
            else
            {
                cout<<"Not full"<<endl;
            }
            break;

            case 5:
            cout<<"Number of value are "<<s.count()<<endl;
            break;

            case 6:
            cout<<"Enter positon"<<endl;
            cin>>position;
            cout<<"Value at position "<<position<<" is "<<s.peek(position);
            break;

            case 7:
            cout<<"Enter position at which you want to change value"<<endl;
            cin>>position;
            cout<<"Enter value"<<endl;
            cin>>value;
            s.change(position,value);
            break;

            case 8:
            s.display();
            break;

            case 9:
            system("cls");
            break;

            default:
            cout<<"Invalid input"<<endl;
        }

    } while (option!=0);

    return 0;
}