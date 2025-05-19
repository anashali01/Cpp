// Create a class Employee with members: id, name, and salary. Include functions to input and display
// employee details.

#include <iostream>
#include <vector>
using namespace std;

class company
{
private:
    int id;
    string name;
    float salary;

public:
    void input()
    {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee salary: ";
        cin >> salary;
    }
    void display()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};
class employee : public company
{
public:
    void input()
    {
        company::input();
    }
    void display()
    {
        company::display();
    }
};

int main()
{
    vector<employee> empList;  // Vector to store multiple employees
    int choice;
    employee emp;  // Create new employee object

    do
    {
        cout << "==========================" << endl;
        cout << "Welcome to Employee Management System" << endl;
        cout << "==========================" << endl;
        cout << "Enter 1 for input" << endl;
        cout << "Enter 2 for display" << endl;
        cout << "Enter 3 for exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            {
                
                emp.input();
                empList.push_back(emp);  // Add employee to the list
                cout << "Employee added successfully!" << endl;
            }
            break;

        case 2:
        
            if(empList.empty()) {
                cout << "No employees to display!" << endl;
            } else {
                cout << "==========================" << endl;
                cout << "Employee Details" << endl;
                cout << "==========================" << endl;
                for(employee emp: empList) {  // Loop through all employees
                    emp.display();
                    cout << "==========================" << endl;
                }
            }
            break;

        case 3:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);
    
    cout << "Thank you for using the program!" << endl;
    return 0;
}