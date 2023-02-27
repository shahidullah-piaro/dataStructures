#include<bits/stdc++.h>

using namespace std;

int main()
{
    // Create a deque containing integers
    //1 3 5 7 2 0
    int n;
    cin>>n;
    deque<int>d;
    for (int i = 1; i <= n; i++)
    {
        int pp;
        cin>>pp;
        d.push_back(pp);
    }

    while(!d.empty())
    {
        int f = d.front();
        int b = d.back();
        if(f<b)
        {
            cout<<f<<" ";
            d.pop_front();
        }
        else
        {
            cout<<b<<" ";
            d.pop_back();
        }
    }
    return 0;
}
