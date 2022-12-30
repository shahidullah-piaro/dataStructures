#include<bits/stdc++.h>

using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    Student()
    {

    }

    Student(string name, int std_id, int age)
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age;
    }

    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<endl;
    }
};

int main()
{
    Student s[10];
    for(int i=0;i<10;i++)
    {
        s[i] = Student("A", i, 20+i);
    }
    for(int i=0;i<10;i++)
    {
        s[i].print_information();
    }
    return 0;
}

