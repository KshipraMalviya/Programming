#include<iostream>
using namespace std;

class node
{
    public:
    int key;
    int data;
    node* next;
    node()
    {
        key=data=0;
        next=NULL;
    }
    node(int k,int d)
    {
        key=k;
        data=d;
        next=NULL;
    }
};

class SinglyLinkedList
{
    public:
    node* head;
    SinglyLinkedList()
    {
        head=NULL;
    }
    SinglyLinkedList(node* n)
    {
        head=n;
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

    int countNode()
    {
        int count=0;
        node* temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return count;
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
        cout<<"2 - printList()"<<endl;
        cout<<"3 - findAndDeleteNode()"<<endl;
        cout<<"4 - Clear Screen "<<endl;
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
            s.printList();
            break;

            case 3:
            cout<<"Enter position n from last (where node has to be deleted)"<<endl;
            cin>>k1;
            s.deleteNode(s.countNode()-k1+1);
            break;

            case 4:
            system("cls");
            break;

            default:
            cout<<"Invalid input"<<endl;
        }

    }while(option!=0);

    return 0;
}