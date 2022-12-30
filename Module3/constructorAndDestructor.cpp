#include<bits/stdc++.h>

using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    Student(string s, int id, int ag, string f_name, string m_name)
    {
        name = s;
        std_id = id;
        age = ag;
        fathers_name = f_name;
        mothers_name = m_name;
    }

    Student(string name, int std_id, int age)
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age;
    }

    Student()
    {

    }

    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<endl;
    }

    ~Student()
    {
        //cout<<"Called";
        //print_information();
    }
};

int main()
{
    Student s("A", 10, 20, "B", "C");
    s.print_information();

    Student s2("A", 10, 20);
    s2.print_information();

    Student s3;
    return 0;
}
