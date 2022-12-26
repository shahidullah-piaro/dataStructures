#include<bits/stdc++.h>

using namespace std;

int main()
{
    int *z = new int;
    *z = 10;
    cout<<z<<endl;
    cout<<*z<<endl;
    delete z;
    int n;
    cin>>n;
    int *x = new int[n];
    for(int i=0;i<n;i++)
        cin>>x[i];
    cout<<x<<endl;
    for(int i=0;i<n;i++)
        cout<<x[i];

    delete[] x;
    return 0;
}
