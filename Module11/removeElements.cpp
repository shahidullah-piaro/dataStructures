#include<bits/stdc++.h>

using namespace std;

int main()
{
    int m;
    cin>>m;
    int intttt;
    vector<int>a2;
    for(int i=0 ; i<m; i++)
        cin>>intttt;
    {
        a2.push_back(intttt);
    };
    int n,b;
    cin>>n>>b;
    a2.erase(a2.begin()+n-1,a2.begin()+b);
    for(int i=0;i<a2.size();i++){
        cout << a2[i] << " ";
    }
    return 0;
}
