#include <bits/stdc++.h>
using namespace std;

int findMaxRec(vector<int>A, int n)
{
	if (n == 1)
		return A[0];
	return max(A[n-1], findMaxRec(A, n-1));
}

int main()
{
    int n;
    cin>>n;
    int inttt;
    vector<int>a;
    for(int i=0 ; i<n ; i++)
    {
        cin>>inttt;
        a.push_back(inttt);
    };
	cout << findMaxRec(a, n);
	return 0;
}

