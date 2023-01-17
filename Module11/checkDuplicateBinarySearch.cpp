#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&arr, int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		if (arr[m] == x){

			if(arr[m]==arr[m+1] || arr[m]==arr[m-1])
            {
                return m;
            }
		}

		if (arr[m] < x)
			l = m + 1;

		else
			r = m - 1;
	}

	return -1;
}

int main(void)
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
	int result = binarySearch(a2, 0, m - 1, n);
	(result == -1)
		? cout << "NO"
		: cout << "YES";
	return 0;
}

