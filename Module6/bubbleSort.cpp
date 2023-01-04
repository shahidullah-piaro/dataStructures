#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //Time Complexity : O(n^2)
    //Memory Complexity : O(n)
    /*
    pass = 0, count = n-1
    pass = 1, count = n-2
    .
    .
    .
    pass = n-1, count = 0
    sum = ((n-1)*n)/2
        = O(n^2)
    */
    for(int pass=0; pass<n; pass++)
    {
        bool sorted = true;
        int last = n-1-pass;
        for(int j=0; j<last; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                sorted = false;
            }
        }
        if(sorted)
            break;
        cout<<"After Pass "<<pass<<": ";
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
