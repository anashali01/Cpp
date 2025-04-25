// Student Data Using Construct 
#include<iostream>
using namespace std;
class Student{
    string name;
    int rollNumber;
    float marks;
public:
    Student(string name , int rollNumber , float marks){
        name = name;
        rollNumber = rollNumber;
        marks = marks;

        cout << name << endl;
        cout << rollNumber << endl;
        cout << marks << endl;
    }
};
int main()
{
    Student std1("Alex" , 21 , 27);
    Student std2("Bob" , 1 , 47.32);

return 0;

}