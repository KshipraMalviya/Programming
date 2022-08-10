#include<iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cout<<"Enter n1, n2, n3, n4 respectively : \n";
    cin>>n1>>n2>>n3>>n4;
    if(n2==n3)
    {
        int ar1[n1][n2], ar2[n3][n4], ar3[n1][n4];

        cout<<"Enter elements of array 1\n";

        for(int x=0; x<n1; x++)
        {
            for(int y=0; y<n2; y++)
            {
                cin>>ar1[x][y];
            }
        }

        cout<<"Enter elements of array 2\n";

        for(int x=0; x<n3; x++)
        {
            for(int y=0; y<n4; y++)
            {
                cin>>ar2[x][y];
            }
        }

        for(int z=0; z<n1; z++)
        {
            for(int x=0; x<n4; x++)
            {
                for(int y=0; y<n2; y++)
                {
                    ar3[z][x]+=ar1[z][y]*ar2[y][x];
                }
            }
        }

        for(int x=0; x<n1; x++)
        {
            for(int y=0; y<n4; y++)
            {
                cout<<ar3[x][y]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Can't be multiplied\n";
    }

    return 0;
}