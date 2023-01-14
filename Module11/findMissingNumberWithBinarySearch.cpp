#include<bits/stdc++.h>
using namespace std;
int findMissing(int arr[], int N)
{
	int left = 0, right = N - 1;
	while (left <= right) {

		int mid = (left + right) / 2;
		if (arr[mid] != mid + 1 && arr[mid - 1] == mid)
		{
            return mid + 1;
        }

		if (arr[mid] == mid + 1)
			left = mid + 1;

		else
			right = mid - 1;
	}
	return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++)
        cin>>arr[i];
    sort(arr, arr + (n-1));
    cout<<findMissing(arr, n);
    return 0;
}
