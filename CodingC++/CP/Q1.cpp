#include <iostream>
using namespace std;

int main() {
	int a; cin>>a;
	if(a%2!=0)
	{
	    cout<<-1<<endl;
	}
	else
	{
	cout<<0<<" "<<a/2<<endl;
	cout<<a/2<<" "<<a<<endl;
	cout<<a/2<<" "<<0<<endl;
	cout<<a<<" "<<a/2<<endl;
	}
	return 0;
}