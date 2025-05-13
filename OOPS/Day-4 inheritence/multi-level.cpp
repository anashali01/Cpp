#include <iostream>
using namespace std;
class school{
    public:
        string name;
        int roll;
        void getData(){
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter roll: ";
            cin >> roll;
        }
        void show(){
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
        }
};
class student : public school{
    public:
        int marks;
        void getData(){
            school::getData();
            cout << "Enter marks: ";
            cin >> marks;
        }
        void show(){
            school::show();
            cout << "Marks: " << marks << endl;
        }
};
class result : public student{
    public:
        void show(){
            student::show();
            cout << "Result: " << (marks >= 40 ? "Pass" : "Fail") << endl;
        }
};
int main()
{
    result r;
    r.getData();
    r.show();
    return 0;
}