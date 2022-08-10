#include<iostream>
using namespace std;

class Student
{
    public :
     string name;
     int age;
     bool gender;

     void printInfo()
     {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Gender : "<<gender<<endl;
     }
};

int main()
{
    Student ar[3];
    for(int x=0; x<3; x++)
    {
        cout<<"Name : ";
        cin>>ar[x].name;
        cout<<"Age : ";
        cin>>ar[x].age;
        cout<<"Gender : ";
        cin>>ar[x].gender;
    }
    cout<<endl<<endl;
    for(int x=0; x<3; x++)
    {
        ar[x].printInfo();
    }

     return 0;
}