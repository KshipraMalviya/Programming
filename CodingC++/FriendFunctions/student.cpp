#include <bits/stdc++.h>
#include <math.h>
using namespace std;

static int i;

class Student
{
public:
    int rollno, fee;
    string name;

    Student()
    {
        rollno=0, fee=0;
        name=" ";
    }
    Student(int r, int f, string n)
    {
        rollno = r;
        fee = f;
        name = n;
    }

    void addStudent(int f,string n, Student st[])
    {
        Student s(i+1,f,n);
        st[i++]=s;
    }
    void deleteStudent(int r , Student st[])
    {
        for(int x=r-1; x<=i-1; x++)
        {
            st[x]=st[x+1];
        }
        i--;
    }
};

int main()
{
    Student s1;
    int n;
    cout<<"Enter size of the array"<<endl;
    cin>>n;
    Student s[n];
    i=0;
    int c;
    do
    {
        cout<<"Enter your choice"<<endl;
        cout<<"1 - Add Student"<<endl;
        cout<<"2 - Delete Student"<<endl;
        cout<<"0 - Exit"<<endl;
        cin>>c;
        if(c==1)
        {
            int f; cin>>f;
            string name; cin>>name;
            s1.addStudent(f,name,s);
        }
        else if(c==2) 
        {
            int r; cin>>r;
            s1.deleteStudent(r,s);
        }
        else 
        {
            break;
        }
    
        cout<<"\nUpdated List Of Students\n\n";
    for(int x=0; x<n; x++)
    {
        cout<<s[x].name<<endl;
    }

    } while (c!=0);

    return 0;
}