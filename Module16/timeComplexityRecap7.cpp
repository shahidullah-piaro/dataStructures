#include<bits/stdc++.h>

using namespace std;

//Time Complexity : O(n*log(n))

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j=j+i)//n+n/2+n/3+n/4+.....+n/n --> n(1/1+1/2+1/3+.......+1/n) harmonic series sum log e base n --> n(log n)
        {
            cout<<i<<" "<<j<<endl;//O(1)
        }
    }
    return 0;
}
