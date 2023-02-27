#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,vector<int>> mp;

    for(int i=0; i<n; i++)
    {
        string in;
        cin>>in;
        if (mp[in].empty())
        {
            cout << "-1" <<endl;
            mp[in].push_back(i);
        }
        else
        {
            cout<<mp[in].back()<<endl;
            mp[in].pop_back();
            mp[in].push_back(i);
        }
    }
    return 0;
}
