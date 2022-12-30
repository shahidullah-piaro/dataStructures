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

class Rectangle{
public:
    int width,height;
    Student s;
    //Calculate Area
    int calculate_area()
    {
        return height*width;
    }
    //Calculate Perimeter
    int calculate_perimeter()
    {
        return 2*(height+width);
    }
};


main()
{
    Rectangle r1,r2;
    r1.width = 8;
    r1.height = 4;

    cout<<r1.calculate_area()<<endl;
    cout<<r1.calculate_perimeter()<<endl;
    r1.s.name = "X";
    r1.s.print_information();

    r2.width = 3;
    r2.height = 9;
    cout<<r2.calculate_area()<<endl;
    cout<<r2.calculate_perimeter()<<endl;
    return 0;
}
