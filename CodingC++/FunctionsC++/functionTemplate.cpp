#include<iostream>
using namespace std;

template<typename T, typename U>
U add(T x, U y)
{
    return (x+y);
}

int main()
{
    cout<<add<int,double>(3,7.5)<<endl;
    cout<<add<float>(3.3f,7.5f)<<endl;
    cout<<add<double>(3.55,7.66)<<endl;

    return 0;
}