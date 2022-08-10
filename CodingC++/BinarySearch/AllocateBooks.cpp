#include <iostream>
#include<algorithm>
#include <climits>

using namespace std;

bool isFeasible(int mid, int ar[], int n, int k)
{
    int element = 1;
    int sum = 0;
    for (int x = 0; x < n; x++)
    {
        sum += ar[x];
        if (sum > mid)
        {
            element++;
            sum = ar[x];
            if(sum>mid) return false;
        }
    }
    if (element > k)
    {
        return false;
    }
    return true;
}

int allocateBooks(int ar[], int n, int k)
{
    int result = -1;
    int low = ar[0];
    int high = 0;
    for (int x = 0; x < n; x++)
    {
        high += ar[x];
        low=min(low,ar[x]);
    }
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isFeasible(mid, ar, n, k))
        {
            result = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return result;
}

int main()
{
    int ar[] = {73, 58, 30, 72, 44, 78, 23, 9};
    int n = 8;
    int k = 5;
    cout << allocateBooks(ar, n, k) << endl;

    return 0;
}
// [  ]
//B : 5