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
    //for sorting option 2 :
    bool operator < (Student s)
    {
        return std_id < s.std_id;
    }
};
//for sorting option 1 :
bool comp(Student a, Student b)
{
    //when a is less than b
    //return a.std_id < b.std_id;
}

int main()
{
    vector<Student>a;
    for(int i=0;i<10;i++)
    {
        a.push_back(Student("A", 20-i, 20+i));
    }
    for(int i=0;i<10;i++)
    {
        a[i].print_information();
    }
    cout<<"After sorting"<<endl;
    sort(a.begin(),a.end());//,comp -> Option 1 function
    for(int i=0;i<10;i++)
    {
        a[i].print_information();
    }
    return 0;
}

