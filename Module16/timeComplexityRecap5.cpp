#include<bits/stdc++.h>

using namespace std;

//Time Complexity : O(n^3)

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)//O(n*n^2)=O(n^3)
    {
        for(int j=0;j<n;j++)//O(n*n)=O(n^2)
        {
            for(int k=0;k<n;k++)//O(n*1)=O(n)
            {
                cout<<i<<" "<<j<<" "<<k<<endl;//O(1)
            }
        }
    }
    return 0;
}
