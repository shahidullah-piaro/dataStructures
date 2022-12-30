#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "First Line End Here,";
    string s2 = " Second Line Start.";
    string s3 = s1 + s2;
    cout<<s3<<endl;

    string z = "update ascii value";
    for(int i=0;i<z.size();i++)
    {
        z[i] = z[i] + 1;
    }

    cout<<z<<endl;

    string s;
    getline(cin,s);
    s.erase(s.begin());
    //s.erase(s.begin() + s.size()-1);
    s.pop_back();
    cout<<s<<endl;

    return 0;
}
