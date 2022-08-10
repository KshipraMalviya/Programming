#include <iostream> //SIMPLE SNIPPETS
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

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class CircularLinkedList
{
public:
    node *head;

    CircularLinkedList()
    {
        head = NULL;
    }

    CircularLinkedList(node *n)
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

    int listSize(node *head)
    {
        int size = 1;
        node *temp = head;
        while (temp->next != head)
        {
            size++;
            temp = temp->next;
        }
        return size;
    }

    void appendNode(node *n) //JAI RADHEKRISHNA
    {
        if (head == NULL)
        {
            head = n;
            n->next = head;
            cout << "Node appended" << endl;
        }
        else
        {
            node *ptr = head;
            while (ptr->next != head)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
            n->next = head;
            cout << "Node appended" << endl;
        }
    }

    void prependNode(node *n)
    {
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
        head = n;
        cout << "Node prepended " << endl;
    }

    void insertNode(int k, node *n)
    {
        node *ptr = getPtr(head, k);
        node *nextt = ptr->next;
        ptr->next = n;
        n->next = nextt;
    }

    void deleteNode(int k)
    {
        if (head == NULL)
        {
            cout << "Already empty. Can't delete anything." << endl;
        }
        else if (head != NULL)
        {
            if (listSize(head) == 1)
            {
                head = NULL;
                cout << "Deleted" << endl;
            }
            else if (k == 1)
            {
                node *temp = head;
                while (temp->next != head)
                {
                    temp = temp->next;
                }
                head = head->next;
                temp->next = head;
                cout << "Unlinked" << endl;
            }
            else
            {
                node *prev = getPtr(head, k - 1);
                node *nextt = prev->next->next;
                prev->next = nextt;
                cout << "Unlinked" << endl;
            }
        }
    }

    void updateNode(int k, int d)
    {
        node *ptr = getPtr(head, k);
        if (ptr != NULL)
        {
            ptr->data = d;
            cout << "Node data updated successfully" << endl;
        }
        else
        {
            cout << "Node doesn't exist with position " << k << endl;
        }
    }

    void printList()
    {
        if (head == NULL)
        {
            cout << "Empty Circular Linked List" << endl;
        }
        else
        {
            cout << endl
                 << "Value of circular linked list" << endl;
            node *ptr = head;
            cout << ptr->data << " ->";
            while (ptr->next != head)
            {
                ptr = ptr->next;
                cout << ptr->data << " ->";
            }
        }
    }
};

int main()
{
    CircularLinkedList s;
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
            cout << "Insert Node Operation\nEnter position of existing node after which you want to insert this new node" << endl;
            cin >> k1;
            cout << "Enter data of the new node " << endl;
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
            cout << "Update node operation\nEnter position and data of the node to be deleted" << endl;
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