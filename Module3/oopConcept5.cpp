#include<bits/stdc++.h>

using namespace std;

class User{
protected:
    string name;
    int age;
};

class Admin: User{
private:
    string designation;
public:
    void Set(string s, int ag, string dg)
    {
        name = s;
        age = ag;
        designation = dg;
    }

    void print()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<designation<<endl;
    }
};

int main()
{
    Admin ad;
    ad.Set("A",22,"D");
    ad.print();
    return 0;
}
