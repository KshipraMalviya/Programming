#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    cout<<"Enter operator"<<endl;
    char c;
    cin>>c;

    switch(c)
    {
        case '+':
        cout<<(a+b);
        break;

        case '-':
        cout<<(a-b);
        break;

        case 'x':
        cout<<(a*b);
        break;

        case '/':
        cout<<(a/b);
        break;

        default:
        cout<<"Invalid input";
    }

    return 0;
}