#include <iostream>
using namespace std;

class employee{
    int e_id;
    string e_name;
    public:
    
    employee(int id, string name){
        e_id = id;
        e_name = name;
    }
    ~employee(){
        cout << "Employee ID: " << e_id << endl;
        cout << "Employee Name: " << e_name << endl;
    }
    void setdata();
};
void employee::setdata(){
    cout << "Employee ID: " << this->e_id << endl;
    cout << "Employee Name: " << this->e_name << endl;
}
int main()
{

    
    employee emp(101, "John Doe");
    emp.setdata();
    return 0;
}