// Employee Data
// Employee ID , Employee Name , Employee salary

#include <iostream>
using namespace std;
int main()
{
    int emp_id;
    string emp_name;
    float emp_salary;

    cout<<"Enter Employee ID : :";
    cin>>emp_id;
    cout<<"Enter Employee Name :";
    cin>>emp_name;
    cout<<"Enter Employee Salary :";
    cin>>emp_salary;

    cout<<"The Data Of Employee : "<<emp_id<<" "<<emp_name<<" "<<emp_salary;
    return 0;
}