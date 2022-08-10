#include<iostream>
using namespace std;

template<typename T,typename U>
class Weight
{
    private:
    T kg;
    U grams;
    int a;
    double b;

    public:
    void setData(T x,U y)
    {
        kg=x;
        grams=y;
    }
    T getkgData()
    {
        return kg;
    }
    U getgramsData()
    {
        return grams;
    }
};

int main()
{  
    Weight <int,double>w1;
    w1.setData(5,0.18);
    cout<<"w1 (kg): "<<w1.getkgData()<<endl;
    cout<<"w1 (grams): "<<w1.getgramsData()<<endl;

    // Weight <double>w2;
    // w2.setData(1.8);
    // cout<<"w2 : "<<w2.getData()<<endl;


    return 0;
}