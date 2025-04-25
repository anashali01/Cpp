// WAP to create a Employee data using Class and Object
#include <iostream>
using namespace std;
class Employee{
    string e_name;
    int age; 
    float salary;
    public:
        int data (string e_name , int age , float salary)
        {
            this -> e_name = e_name;
            this -> age = age;
            this -> salary = salary;

            cout << "Employee Name :" << e_name << endl;
            cout << "Employee Age : " << age << endl;
            cout << "Employee Salary :" << salary << endl;
        }
};
int main()
{
    string e_name;
    int age;
    float salary;

    cout << "Enter name :";
    cin >> e_name;
    cout << "Enter age :";
    cin >> age;
    cout << "Enter salary :";
    cin >> salary;

    Employee emp;

    emp.data(e_name , age , salary);
    return 0;
}