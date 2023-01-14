#include<bits/stdc++.h>

using namespace std;
int n,k;
int pairCount;
vector<int> merge_sort(vector<int>&a)
{
    //int countt;
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

void pairSum(vector<int>&input, int size, int x)
{
    int i = 0, j = size - 1, min = 0, max = 0, counter = 0;
    while (i < j)
    {
        if ((input[i] + input[j]) > x)
        {
            j--;
        }
        else if ((input[i] + input[j]) < x)
        {
            i++;
        }
        else
        {
            if (input[i] > input[j])
            {
                i++, j--;
                counter++;
            }
            else
            {
                i++, j--;
                counter++;
            }
        }
    }
    cout << counter;
}
int main()
{
    cin>>n;
    int inttt;
    vector<int>a;
    for(int i=0 ; i<n; i++)
    {
        cin>>inttt;
        a.push_back(inttt);
    };
    cin>>k;
    vector<int>sorted_a = merge_sort(a);

    pairSum(sorted_a,n,k);
    return 0;
}
