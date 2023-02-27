#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    map<string, int> cnt;
    while (n--)
    {
        string s;
        cin >> s;
        if (cnt[s] >= 1)
            cout << cnt[s] << '\n';
        else
            cout << "-1" << '\n';
        cnt[s]++;
    }

    return 0;
}
