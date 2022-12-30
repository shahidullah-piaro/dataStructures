#include<bits/stdc++.h>

using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<endl;
    }
};

int main()
{
    Student s;
    s.name = "Shahidullah";
    s.std_id = 12;
    s.age = 21;
    s.fathers_name = "Faridul";
    s.mothers_name = "Rahima";

    s.print_information();

    Student s2;
    s2.name = "Piaro";
    s2.std_id = 21;
    s2.age = 12;
    s2.fathers_name = "Islam";
    s2.mothers_name = "Akter";

    s2.print_information();

    return 0;
}
