#include<bits/stdc++.h>

using namespace std;
// 1+2+3+.....+n --> n(n+1)/2 --> (n^2+n)/2 --> (n^2/2) and (n/2)
// Here (n^2/2) is dominant part and 2 is constant
// Time Complexity : O(n^2)

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)//O(n)
    {
        for(int j=i;j<n;j++)//O(n-i) Loop iterate n-i times
        {
            cout<<i<<" "<<j<<endl;//O(1)
        }
    }
    return 0;
}
