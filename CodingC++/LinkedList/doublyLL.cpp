#include <iostream>
using namespace std;

class node
{
public:
    node *prev;
    int data;
    node *next;
    node()
    {
        prev = NULL;
        data = 0;
        next = NULL;
    }
    node(int d)
    {
        prev = NULL;
        data = d;
        next = NULL;
    }
};

class DoublyLinkedList
{
public:
    node *head;
    DoublyLinkedList()
    {
        head = NULL;
    }
    DoublyLinkedList(node *head)
    {
        this->head = head;
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
            n->prev = temp;
            cout << "Appended" << endl;
        }
    }
    void prependNode(node *n)
    {
        if (head == NULL)
        {
            head = n;
            cout << "Node prepended" << endl;
        }
        else
        {
            head->prev = n;
            n->next = head;
            head = n;
            cout << "Node prepended" << endl;
        }
    }
    void insertNode(int k, node *n)
    {
        node *ptr = getPtr(head, k);
        if (ptr == NULL)
        {
            cout << "No node exists at " << k << "th position" << endl;
        }
        else if (ptr->next == NULL)
        {
            ptr->next = n;
            n->prev = ptr;
            cout << "Inserted" << endl;
        }
        else
        {
            node *nextt = ptr->next;
            ptr->next = n;
            n->prev = ptr;
            n->next = nextt;
            nextt->prev = n;
            cout << "Inserted" << endl;
        }
    }
    void deleteNode(int k)
    {
        if (head == NULL)
        {
            cout << "Already Empty.Can't delete." << endl;
        }
        else if(head->next==NULL && getPtr(head, k)==head)
        {
            head=NULL;
            cout<<"Unlinked"<<endl;
        }
        else
        {
            node *temp = getPtr(head, k);
            if (temp->prev == NULL)
            {
                head = temp->next;
                cout << "Node unlinked" << endl;
            }
            else
            {
                temp->prev->next = temp->next;
                if (temp->next != NULL)
                    temp->next->prev = temp->prev;
                cout << "Node unlinked" << endl;
            }
        }
    }
    void updateNode(int k, int d)
    {
        node *temp = getPtr(head, k);
        if (temp == NULL)
        {
            cout << "No node exists at " << k << "th position" << endl;
        }
        else
        {
            temp->data = d;
            cout << "Updated" << endl;
        }
    }
    void printList()
    {
        if (head == NULL)
        {
            cout << "Empty List" << endl;
        }
        else
        {
            node *temp = head;
            cout << "Values of Doubly Linked List" << endl
                 << endl;
            cout << "NULL -- ";
            while (temp->next != NULL)
            {
                cout << temp->data << " <-> ";
                temp = temp->next;
            }
            cout << temp->data << " -- NULL" << endl;
        }
    }
};

int main()
{
    DoublyLinkedList s;
    int option;
    int k1, data1;
    do
    {
        cout << "\nMenu : " << endl;
        cout << "1 - appendNode()" << endl;
        cout << "2 - prependNode()" << endl;
        cout << "3 - insertNode()" << endl;
        cout << "4 - deleteNode()" << endl;
        cout << "5 - updateNode()" << endl;
        cout << "6 - printList()" << endl;
        cout << "7 - Clear Screen " << endl;
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
            cout << "Prepend Node Operation\nEnter data of the node to be prepended" << endl;
            cin >> data1;
            n1->data = data1;
            s.prependNode(n1);
            break;

        case 3:
            cout << "Insert Node Operation\nEnter positon of existing node after which you want to insert this new node" << endl;
            cin >> k1;
            cout << "Enter data of the new node first" << endl;
            cin >> data1;
            n1->data = data1;

            s.insertNode(k1, n1);
            break;

        case 4:
            cout << "Delete node operation\nEnter position of the node to be deleted" << endl;
            cin >> k1;
            s.deleteNode(k1);
            break;

        case 5:
            cout << "Update node operation\nEnter position and data of the node to be updated" << endl;
            cin >> k1;
            cin >> data1;
            s.updateNode(k1, data1);
            break;

        case 6:
            s.printList();
            break;

        case 7:
            system("cls");
            break;

        default:
            cout << "Invalid input" << endl;
        }

    } while (option != 0);

    return 0;
}