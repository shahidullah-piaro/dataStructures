#include <bits/stdc++.h>
using namespace std;

bool isPalRec(string str,
			int s, int e)
{

	if (s == e)
	return true;

	if (str[s] != str[e])
	return false;

	if (s < e + 1)
	return isPalRec(str, s + 1, e - 1);

	return true;
}

bool isPalindrome(string str)
{
	int n = str.size();

	if (n == 0)
		return true;

	return isPalRec(str, 0, n - 1);
}

int main()
{
    string str;
    cin>>str;

	if (isPalindrome(str))
	cout << "Yes";
	else
	cout << "No";

	return 0;
}

