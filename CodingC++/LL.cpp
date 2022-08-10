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
    
};

void transverse(node* ptr)
 {
     while (ptr != NULL)
    {
        cout<<"Elements :"<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

int main()
{
    node* head=new node();
    node* second=new node();
    node* third=new node();
    node* fourth=new node();
    head->data = 7;
    head->next = second;
 
    // Link second and third nodes
    second->data = 11;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    transverse(head);
    return 0;
}