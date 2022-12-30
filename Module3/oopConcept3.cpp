#include<bits/stdc++.h>

using namespace std;

class Person{
public:
    string name;
    Person *father, *mother;

    void print_info()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Fathers Name : "<<father->name<<endl;
        cout<<"Mothers Name : "<<mother->name<<endl;
    }
};

int main()
{
    Person p;
    p.father = new Person;
    p.mother = new Person;
    p.name = "A";
    p.father->name = "B";
    p.mother->name = "C";
    p.print_info();
    return 0;
}
