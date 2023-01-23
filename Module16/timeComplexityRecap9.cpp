#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    //Time Complexity : O(n*log(n))
    for(int i=1;i<=n;i++)
    {
        if(__builtin_popcount(i)==1)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    cout<<"_________________"<<endl;
    //Time Complexity : O(n(log n)^2)
    for(int i=1;i<=n;i++)
    {
        if(__builtin_popcount(i)==2)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    return 0;
}
