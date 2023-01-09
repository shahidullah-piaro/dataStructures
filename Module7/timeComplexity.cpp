#include<bits/stdc++.h>

using namespace std;

//Time Complexity : O(k)
//where k is number of bits.

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(__builtin_popcount(i) == 2)
        {
            for(int j=1; j<=n; j++)
            {
                cout<<"Each Iteration"<<endl;
                cout<<"i : "<<i<<endl;
                cout<<"j : "<<j<<endl;
            }
        }
    }

    return 0;
}
