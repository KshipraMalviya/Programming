#include<iostream>
using namespace std;

class Weight
{
    private:
    int kg;
    public:
    Weight()
    {
        kg=0;
    }
    Weight(int w)
    {
        kg=w;
    }
    void print()
    {
        cout<<"Weight in kg : "<<kg<<endl;
    }
    // void operator ++()
    // {
    //     ++kg;
    // }
    // void operator ++(int)
    // {
    //     kg++;
    // }
    // void operator --()
    // {
    //     --kg;
    // }
    // void operator --(int)
    // {
    //     kg--;
    // }
    Weight operator ++()
    {
        Weight temp;
        temp.kg=++kg;
        return temp;
    }
};

int main()
{
    // Weight w;
    // w.print();

    // ++w;
    // w.print();

    // w++;
    // w.print();

    // --w;
    // w.print();

    // w--;
    // w.print();

    Weight w1,w2;
    w2=++w1;
    ++w2;
    w2.print();

    return 0;
}