#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int>&arr, int x, int low, int high)
{
    while(low <= high)
    {
        int mid = (low + high)/2;
        if (x == arr[mid])
        {
            if(arr[mid]==arr[mid+1] || arr[mid]==arr[mid-1])
            {
                return arr[mid];
            }
        }

        else if (x > arr[mid])
        {
            low = mid + 1;

        }
        else if(x < arr[mid])
        {
            high = mid - 1;
        }
    }
}

int main()
{
    int m;
    cin>>m;
    int intttt;
    vector<int>a2;
    for(int i=0 ; i<m; i++)
    {
        cin>>intttt;
        a2.push_back(intttt);
    };
    int n;
    cin>>n;
    int low = 0;
    int high = m-1;
    int anss = binarySearch(a2,n,low,high);
    //if(anss!=1)
        cout<<anss;
    //else
        //cout<<anss;
    return 0;
}
