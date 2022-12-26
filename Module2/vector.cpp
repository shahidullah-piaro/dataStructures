#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>a;
    for(int i=0;i<10;i++)
    {
        //cout<<"Before Push "<<a.size()<<endl;
        a.push_back(i);
        //cout<<"After Push "<<a.size()<<endl;
    }

    a.insert(a.begin() + 1, 100);

    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }

    a.erase(a.begin()+1);
    a.pop_back();
    cout<<"After Delete\n";
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;
    }

    vector<int>x = {1,2,3,4,5};
    x.resize(3);
    for(int i=0;i<x.size();i++)
        cout<<x[i]<<endl;
    return 0;
}
