#include<bits/stdc++.h>

using namespace std;

//Time Complexity : O(3 n^2) -> O(c n^2) Here c is constant, time complexity will be O(n^2)
//Space Complexity : O(n^2) -> Here n*n size vector declare for memory

int main()
{
    int n;//O(1)
    cin>>n;

    vector<int>a(n*n);//Time Complexity : O(n^2), Space Complexity : O(n^2)
    for(int i=0;i<n*n;i++)//O(n^2)
    {
        cin>>a[i];
    }

    int sum = 0;
    for(int i=0;i<n*n;i++)//O(n^2)
    {
        sum = sum + a[i];
    }

    cout<<sum<<endl;//O(1)

    return 0;
}
