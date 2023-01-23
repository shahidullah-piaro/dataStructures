#include<bits/stdc++.h>

using namespace std;

//Time Complexity : O(n+n^2) --> Here O(n^2) dominanting part will be the time complexity
//If we doesn't know which one will be dominant in that case time complexity : O(n+n^2)

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)//O(n*1) = O(n)
    {
        cout<<i<<endl;//O(1)
    }
    for(int i=0;i<n;i++)//O(n*n) = O(n^2)
    {
        for(int j=0;j<n;j++)//O(n*1) = O(n)
        {
            cout<<i<<" "<<j<<endl;//O(1)
        }
    }
    return 0;
}
