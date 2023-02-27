#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int> st;
    for (int i = 1; i <= n; i++)
    {
        int pp;
        cin>>pp;
        st.insert(pp);
    }

    int m;
    cin>>m;
    for (int i = 1; i <= m; i++)
    {
        int pp;
        cin>>pp;
        if(st.find(pp) == st.end())
        {
            st.insert(pp);
        }
    }

    for(auto it= st.begin(); it!= st.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
