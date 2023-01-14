#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int low, int high, int x);

bool isSubset(int arr1[], vector<int>&a, int m, int n)
{
    int i = 0;

    for (i = 0; i < n; i++)
    {
        if (binarySearch(arr1, 0, m - 1, a[i]) == -1)
            return 0;

    }
    return 1;

}

int binarySearch(int arr[], int low,int high, int x)
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
    int arr1[m-1];
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    //int arr1[] = { 7, 6, 3, 2, 1 };
    //int arr2[] = { 7, 2, 3 };

    //int m = sizeof(arr1) / sizeof(arr1[0]);
    //int n = sizeof(arr2) / sizeof(arr2[0]);

    sort(arr1, arr1+m);
    if (isSubset(arr1, a, m, n))
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}
