#include<bits/stdc++.h>

using namespace std;
//Time Complexity
//O(nLogn)
vector<string> merge_sort(vector<string>&a)
{
    //base case
    if(a.size()<=1)
    {
        return a;
    }

    int mid = a.size()/2;
    vector<string>b;
    vector<string>c;
    for(int i=0; i<mid; i++)
        b.push_back(a[i]);
    for(int i=mid; i<a.size(); i++)
        c.push_back(a[i]);

    vector<string>sorted_b = merge_sort(b);
    vector<string>sorted_c = merge_sort(c);

    vector<string>sorted_a;
    int idx1 = 0;
    int idx2 = 0;

    for(int i=0; i<a.size(); i++)
    {
        if(idx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if(idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if(sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    return sorted_a;
}

int main()
{
    //yellow apple children zzz chill
    //date cherry apple banana
    vector<string> a;
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        string pp;
        cin>>pp;
        a.push_back(pp);
    }
    vector<string> ans = merge_sort(a);
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
