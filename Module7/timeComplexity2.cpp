#include<bits/stdc++.h>

using namespace std;

//Time Complexity : O(n^2)

int main()
{
    int n;
    cin>>n;
    vector<int>d(n);
    for(int i=1;i<=n; i++)
        for(int j=i ; j<=n ; j = j+i )
            d.push_back(i);

    int sz = d.size();
    cout<<sz<<endl;
    for(int i=0;i<sz;i++)
        cout<<d[i]<<" ";
    return 0;
}
