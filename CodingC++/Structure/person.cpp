#include<iostream>
#include<string>

using namespace std;

struct Person
{
    string name;
    int age;
    double salary;
};

int main()
{
    Person p[2];
    for(int x=0; x<2; x++)
    {
        cout<<"Enter details of person "<<(x+1)<<endl<<endl;
        cin>>p[x].name;
        cin>>p[x].age;
        cin>>p[x].salary;
        cout<<endl<<endl;
    }

    for(int x=0; x<2; x++)
    {
        cout<<"Details of person "<<(x+1)<<endl<<endl;
        cout<<p[x].name<<endl;
        cout<<p[x].age<<endl;
        cout<<p[x].salary<<endl;
        cout<<endl<<endl;
    }

    return 0;
}