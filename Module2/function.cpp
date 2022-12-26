#include<bits/stdc++.h>

using namespace std;

string erase_first_last_word(string z)
{
    z.erase(z.begin());
    z.pop_back();

    return z;
}

void erase_first_last_word_with_void(string &z)
{
    z.erase(z.begin());
    z.pop_back();

    cout<<"In Void Function: "<<z<<endl;
}

void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    string s;
    getline(cin,s);
    int x,y;
    cin>>x>>y;
    swap(x,y);
    string ans = erase_first_last_word(s);
    erase_first_last_word_with_void(s);
    cout<<s<<endl;
    cout<<x<<" "<<y<<endl;
    cout<<ans<<endl;
    return 0;
}
