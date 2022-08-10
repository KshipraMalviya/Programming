#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool isEven(int n)
{
	if(n%2==0) return true;
	return false;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;

		int countEven=0;
		int countOdd=0;
		while(n!=0)
		{
			int d=n%10;
			if(isEven(d)) countEven++;
			else countOdd++;
			n/=10;
		}
		if(countEven>=2 || countOdd>=2)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}