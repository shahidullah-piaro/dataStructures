#include<bits/stdc++.h>

using namespace std;

vector<int> merge_sort(vector<int>&a)
{
    //base case
    if(a.size()<=1)
    {
        return a;
    }

    int mid = a.size()/2;
    vector<int>b;
    vector<int>c;
    for(int i=0; i<mid; i++)
        b.push_back(a[i]);
    for(int i=mid; i<a.size(); i++)
        c.push_back(a[i]);

    vector<int>sorted_b = merge_sort(b);
    vector<int>sorted_c = merge_sort(c);

    vector<int>sorted_a;
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

int findMissingNo (vector<int>&a, int len)
{
    int temp;
    temp  = ((len+1)*(len+2))/2;
    for (int i = 0; i<len; i++)
        temp -= a[i];
    return temp;
}

int main()
{
    int n;
    cin>>n;
    int inttt;
    vector<int>a;
    for(int i=0 ; i<n-1; i++)
    {
        cin>>inttt;
        a.push_back(inttt);
    };
    vector<int>ans = merge_sort(a);
    int missingNo = findMissingNo(ans,n-1);
    cout<<missingNo;
    return 0;
}

