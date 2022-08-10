#include <algorithm>
#include <iostream>    // ARRAY

using namespace std;

int main() {
	int ar[]={ 1, 5, 2, 9, 6, 7, 3, 4, 8, 0 };
	sort(begin(ar),end(ar));
    int s=end(ar)-begin(ar);

    for(int x=0; x<s; x++)
    {
        cout<<ar[x]<<" ";
    }

	return 0;
}
#include <algorithm>
#include <iostream>
#include <vector>     // VECTOR

using namespace std;

int main() {
	vector<int> ar={ 1, 5, 2, 9, 6, 7, 3, 4, 8, 0 };
	sort(begin(ar),end(ar));   // OR sort(ar.begin(),ar.end());
    int s=ar.size();   // OR s=end(ar)-begin(ar);

    for(int x=0; x<s; x++)
    {
        cout<<ar[x]<<" ";
    }

	return 0;
}