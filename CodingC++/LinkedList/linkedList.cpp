#include <iostream> //SIMPLE SNIPPETS
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

    node *nodeExists(int k)
    {
        node *temp = NULL;

        node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }
        return temp;
    }

    void appendNode(node *n) //JAI RADHEKRISHNA
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node already exists with key value " << n->key << endl;
        }
        else
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
    }

    void prependNode(node *n)
    {
        if (nodeExists(n->key) != NULL)
        {
            cout << "Node already exists with key value " << n->key << endl;
        }
        else
        {
            n->next = head;
            head = n;
            cout << "Node prepended" << endl;
        }
    }

    void insertNode(int k, node *n)
    {
        node *ptr = nodeExists(k);
        if (ptr == NULL)
        {
            cout << "No node exists with key value " << n->key << endl;
        }
        else
        {
            if (nodeExists(n->key) != NULL)
            {
                cout << "Node already exists with key value " << n->key << endl;
            }
            else
            {
                n->next = ptr->next;
                ptr->next = n;
                cout<<"Inserted"<<endl;
            }
        }
    }

    void deleteNode(int k)
    {
        if (head == NULL)
        {
            cout << "Already empty. Can't delete anything." << endl;
        }
        else if (head != NULL)
        {
            if (head->key == k)
            {
                head = head->next;
                cout << "Node unlinked with key value " << k << endl;
            }
            else
            {
                node *temp = NULL;
                node *prevptr = head;
                node *currentptr = head->next;
                while (currentptr != NULL)
                {
                    if (currentptr->key == k)
                    {
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else
                    {
                        prevptr = prevptr->next;
                        currentptr = currentptr->next;
                    }
                }
                if (temp != NULL)
                {
                    prevptr->next = temp->next;
                    cout << "Node unlinked with key value " << k << endl;
                }
                else
                {
                    cout << "No node exists with key value " << k << endl;
                }
            }
        }
    }

    void updateNode(int k,int d)
    {
        node* ptr=nodeExists(k);
        if(ptr!=NULL)
        {
            ptr->data=d;
            cout<<"Node data updated successfully"<<endl;
        }
        else
        {
            cout<<"Node doesn't exist with key value "<<k<<endl;
        }
    }

    void printList()
    {
        if(head==NULL)
        {
            cout<<"Empty Singly Linked List"<<endl;
        }
        else
        {
            cout<<endl<<"Value of singly linked list"<<endl;
            node* ptr=head;
            cout<<"("<<ptr->key<<","<<ptr->data<<") ->";
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
                cout<<"("<<ptr->key<<","<<ptr->data<<") ->";
            }
        }
    }
};

int main()
{
    SinglyLinkedList s;
    int option;
    int key1,k1,data1;
    do
    {
        cout<<"\nMenu : "<<endl;
        cout<<"1 - appendNode()"<<endl;
        cout<<"2 - prependNode()"<<endl;
        cout<<"3 - insertNode()"<<endl;
        cout<<"4 - deleteNode()"<<endl;
        cout<<"5 - updateNode()"<<endl;
        cout<<"6 - printList()"<<endl;
        cout<<"7 - Clear Screen "<<endl;
        cout<<endl<<"Enter your choice. Enter 0 to exit."<<endl;

        cin>>option;
        node* n1=new node();

        switch(option)
        {
            case 0:
            break;

            case 1:
            cout<<"\nAppend Node Operation\nEnter key and data of the node to be appended"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            s.appendNode(n1);
            break;

            case 2:
            cout<<"Prepend Node Operation\nEnter key and data of the node to be prepended"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            s.prependNode(n1);
            break;

            case 3:
            cout<<"Insert Node Operation\nEnter key of existing node after which you want to insert this new node"<<endl;
            cin>>k1;
            cout<<"Enter key and data of the new node first"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;

            s.insertNode(k1,n1);
            break;

            case 4:
            cout<<"Delete node operation\nEnter key of the node to be deleted"<<endl;
            cin>>k1;
            s.deleteNode(k1); 
            break;

            case 5:
            cout<<"Update node operation\nEnter key and data of the node to be deleted"<<endl;
            cin>>key1;
            cin>>data1;
            s.updateNode(key1,data1);
            break;

            case 6:
            s.printList();
            break;

            case 7:
            system("cls");
            break;

            default:
            cout<<"Invalid input"<<endl;
        }

    }while(option!=0);

    return 0;
}