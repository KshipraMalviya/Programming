#include <iostream>
using namespace std;

class node
{
public:
    int key;
    int data;
    node *next;

    node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }

    node(int k, int val)
    {
        key = k;
        data = val;
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
    node *getPtr(node *head, int key)
    {
        int k = 1;
        node *temp = head;
        while (k != key)
        {
            temp = temp->next;
            k++;
        }
        return temp;
    }
    void appendNode(node *n) //JAI RADHEKRISHNA
    {

        if (head == NULL)
        {
            head = n;
            cout << "Node appended" << endl;
        }
        else
        {
            node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
            cout << "Node appended" << endl;
        }
    }
    int sizeOfList(node *head)
    {
        int size=1;
        node* temp=head;
        while(temp->next!=NULL)
        {
            size++;
            temp=temp->next;
        }
        return size;
    }
    void appendLastK(node *head, int k)
    {
        int size = sizeOfList(head);
        if (k > size)
        {
            cout << k << " nodes don't even exist" << endl;
        }
        else
        {
            node *prev = getPtr(head, size - k);
            node *newhead = prev->next;
            node *end = getPtr(head, size);
            prev->next = NULL;
            end->next = head;
            head = newhead;
            cout << "Appended last k node" << endl;
        }
    }
    void printList()
    {
        if (head == NULL)
        {
            cout << "Empty Singly Linked List" << endl;
        }
        else
        {
            cout << endl
                 << "Value of singly linked list" << endl;
            node *ptr = head;
            cout << ptr->data << "->";
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
                cout << ptr->data << "->";
            }
        }
    }
};

int main()
{
    SinglyLinkedList s;
    int option;
    int k1, data1;
    do
    {
        cout << "\nMenu : " << endl;
        cout << "1 - appendNode()" << endl;
        cout << "2 - sizeOfList()" << endl;
        cout << "3 - appendLastK()" << endl;
        cout << "4 - printList()" << endl;
        cout << "5 - Clear Screen " << endl;
        cout << endl
             << "Enter your choice. Enter 0 to exit." << endl;

        cin >> option;
        node *n1 = new node();

        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "\nAppend Node Operation\nEnter data of the node to be appended" << endl;
            cin >> data1;
            n1->data = data1;
            s.appendNode(n1);
            break;

        case 2:
            cout << s.sizeOfList(n1) << endl;
            break;

        case 3:
            cout << "Append last k nodes operation\nEnter k" << endl;
            cin >> k1;
            s.appendLastK(n1, k1);
            break;

        case 4:
            s.printList();
            break;

        case 5:
            system("cls");
            break;

        default:
            cout << "Invalid input" << endl;
        }

    } while (option != 0);

    return 0;
}