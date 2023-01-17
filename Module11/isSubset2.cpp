#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int>&arr, int low, int high, int x);

bool isSubset(vector<int>&arr1, vector<int>&a, int m, int n)
{
    int i = 0;

    for (i = 0; i < n; i++)
    {
        if (binarySearch(arr1, 0, m - 1, a[i]) == -1)
            return 0;

    }
    return 1;

}

int binarySearch(vector<int>&arr, int low,int high, int x)
{
    if (high >= low)
    {
        int mid = (low + high) / 2;

        if ((mid == 0 || x > arr[mid - 1]) && (arr[mid] == x))
            return mid;
        else if (x > arr[mid])
            return binarySearch(arr, (mid + 1), high, x);
        else
            return binarySearch(arr, low, (mid - 1), x);
    }
    return -1;
}

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
    for(int i=mid; i<a.size();i++)
        c.push_back(a[i]);

    vector<int>sorted_b = merge_sort(b);
    vector<int>sorted_c = merge_sort(c);

    vector<int>sorted_a;
    int idx1 = 0;
    int idx2 = 0;

    for(int i=0;i<a.size();i++)
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
    int n;
    cin>>n;
    int inttt;
    vector<int>a;
    for(int i=0 ; i<n; i++)
    {
        cin>>inttt;
        a.push_back(inttt);
    };


    int m;
    cin>>m;
    int intttt;
    vector<int>a2;
    for(int i=0 ; i<m; i++)
    {
        cin>>intttt;
        a2.push_back(intttt);
    };


    vector<int>ans = merge_sort(a2);
    vector<int>ans2 = merge_sort(a);

    if (isSubset(ans, ans2, m, n))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
