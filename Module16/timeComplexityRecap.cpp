#include<bits/stdc++.h>

using namespace std;

//Time Complexity : O(3 n) -> O(c n) Here c is constant, time complexity will be O(n)
//Space Complexity : O(n) -> Here n size vector declare for memory

int main()
{
    int n;//O(1)
    cin>>n;

    vector<int>a(n);//Time Complexity : O(n), Space Complexity : O(n)
    for(int i=0;i<n;i++)//O(n)
    {
        cin>>a[i];
    }

    int sum = 0;
    for(int i=0;i<n;i++)//O(n)
    {
        sum = sum + a[i];
    }

    cout<<sum<<endl;//O(1)

    return 0;
}
