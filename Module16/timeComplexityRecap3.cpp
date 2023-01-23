#include<bits/stdc++.h>

using namespace std;
//Find out the divisor of n
//Time Complexity : O(sqrt(n)
//Space Complexity : O(1)

int main()
{
    int n;
    cin>>n;//O(1), Space Complexity : O(1)
    for(int i=1;i*i<=n;i++)//i*i <= n --> i^2 <= n --> i <= sqrt(n)
    {
        if(n%i==0)//O(1)
        {
            cout<<i<<endl;//O(1)
            cout<<(n/i)<<endl;//O(1)
        }
    }
    return 0;
}
