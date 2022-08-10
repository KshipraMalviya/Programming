#include <iostream>
#include <string>

using namespace std;

struct Person
{
    string name;
    int age;
    double salary;
};

int main()
{
    Person p;
    // cout << "Enter details of person " << endl  << endl;
    // cin >> p.name;
    // cin >> p.age;
    // cin >> p.salary;
    // cout << endl<<endl;

    // cout << "Details of person " << endl << endl;
    // cout << p.name << endl;
    // cout << p.age << endl;
    // cout << p.salary << endl;

    Person *ptr=&p;

    cout << "Enter details of person " << endl  << endl;
    cin >> ptr->name;
    cin >> ptr->age;
    cin >> ptr->salary;
    cout << endl<<endl;

    cout << "Details of person " << endl << endl;
    cout << ptr->name << endl;
    cout << ptr->age << endl;
    cout << ptr->salary << endl;

    return 0;
}