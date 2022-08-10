#include<iostream>
#include<string>

using namespace std;

class Cars
{
    private:

    string company;
    string model;
    string fuelType;
    float mileage;
    double price;

    public :

    Cars()
    {
        cout<<"Default constructor is called"<<endl;
        mileage =0;
        price=0;
    }

    Cars(string n,string m,string f,float mi,double p)
    {
        cout<<"Parameterized constructor is called"<<endl;
        company=n;
        model=m;
        fuelType=f;
        mileage=mi;
        price=p;
    }

    Cars(Cars &obj)
    {
        cout<<"Copy constructor is called"<<endl;
        company=obj.company;
        model=obj.model;
        fuelType=obj.fuelType;
        mileage=obj.mileage;
        price=obj.price;
    }

    void setData(string n,string m,string f,float mi,double p)
    {
        company=n;
        model=m;
        fuelType=f;
        mileage=mi;
        price=p;
    }

    void displayData()
    {
        cout<<"Company   : "<<company<<endl;
        cout<<"Model     : "<<model<<endl;
        cout<<"Fuel Type : "<<fuelType<<endl;
        cout<<"Mileage   : "<<mileage<<endl;
        cout<<"Price     : "<<price<<endl;
    }
    ~Cars()
    {
        cout<<"Destructor is called"<<endl;
    }
};

int main()
{
    Cars c1("TOYOTA","ALTIS","PETROL",15.5,900000);
    c1.displayData();

    Cars c2;
    c2.setData("TOYOTA","FORTUNER","DIESEL",11,800000);
    c2.displayData();

    Cars c3=c1;// HERE c1 IS PASSED SO ONLY company REFERS TO c3 AND obj.company REFERS TO c1
    c3.displayData();

    return 0;
}