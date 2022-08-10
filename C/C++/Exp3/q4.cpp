#include<bits/stdc++.h>
using namespace std;

int a;
int cd, cm, cy, dd, dm, dy;

void input(int *d1, int *m1, int *y1, int *d2, int *m2, int *y2)
{
    cd=*d1;
    cm=*m1;
    cy=*y1;
    dd=*d2;
    dm=*m2;
    dy=*y2;
}

void age()
{
    if(cm>dm)
    {
        a=cy-dy;
    }
    else if(cm<dm)
    {
        a=cy-dy-1;
    }
    else if(cm==dm)
    {
        if(cd>dd)
        {
            a=cy-dy;
        }
        else
        {
            a=cy-dy-1;
        }
    }
}

void display()
{
    cout<<"Age : "<<a<<" years."<<endl;
}

int main()
{
    int d1,m1,y1;
    cout<<"Enter current date"<<endl;
    cin>>d1>>m1>>y1;
    int d2,m2,y2;
    cout<<"Enter date of birth"<<endl;
    cin>>d2>>m2>>y2;
    input(&d1,&m1,&y1,&d2,&m2,&y2);
    age();
    display();

    return 0;
}