// Student Data
// Student Roll , Student Name , Student Age

#include <iostream>
using namespace std;
int main()
{
    int student_roll , student_age;
    string student_name;

    cout<<"Enter Student Roll No :";
    cin>>student_roll;
    cout<<"Enter Student Name :";
    cin>>student_name;
    cout<<"Enter Student Age :";
    cin>>student_age;

    cout<<"The Data Of Student : "<<student_roll<<" "<<student_name<<" "<<student_age;

    return 0;
}