#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node()
    {
        data = 0;
        next = NULL;
    }
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

class SinglyLinkedList
{
public:
    node *head;
    SinglyLinkedList()
    {
        head = NULL;
    }
    SinglyLinkedList(node *n)
    {
        head = n;
    }
    void appendNode(node *n)
    {
        if (head == NULL)
        {
            head = n;
            cout << "Node appended" << endl;
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = n;
            cout << "Node appended" << endl;
        }
    }
    node* reverseList(node* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        else
        {
            node* newhead=reverseList(head->next);
            head->next->next=head;
            head->next=NULL;
            return newhead;
        }
    }
    void printList()
    {
        if (head == NULL)
        {
            cout << "Empty " << endl;
        }
        else
        {
            cout << endl
                 << "Values of list" << endl;
            node *temp = head;
            cout << temp->data << " ->";
            while (temp->next != NULL)
            {
                temp = temp->next;
                cout << temp->data << " ->";
            }
        }
    }
};

int main()
{
    SinglyLinkedList s;
    int option;
    int data1;
    do
    {
        cout << "\nMenu : " << endl;
        cout << "1 - appendNode()" << endl;
        cout << "2 - reverseList()" << endl;
        cout << "3 - printList()" << endl;
        cout << "4 - Clear Screen " << endl;
        cout << endl
             << "Enter your choice. Enter 0 to exit." << endl;

        cin >> option;
        node *n1 = new node();

        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "Enter data of the node to be appended" << endl;
            cin >> data1;
            n1->data = data1;
            s.appendNode(n1);
            break;

        case 2:
            s.head=s.reverseList(s.head);
            cout<<"Reversed"<<endl;
            break;

        case 3:
            s.printList();
            break;

        case 4:
            system("cls");
            break;

        default:
            cout << "Invalid input" << endl;
        }
    } while (option != 0);
    return 0;
}