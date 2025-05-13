// Student Management System using Classes and Objects in C++
#include <iostream>
using namespace std;

class Student{
    private:
        int roll_no;
        string name;
    public:
        void setData(int roll_no, string name)
        {
            this-> roll_no = roll_no;
            this-> name = name;
        }
        void displayData()
        {
            cout << "Roll No: " << this -> roll_no << endl;
            cout << "Name: " << this -> name << endl;
        }
};
int main()
{
    int size,roll_no;
    string name;
    cout << "Enter the number of students: ";
    cin >> size;
    Student std[size];
    for(int i = 0; i<size ; i++)
    {
        cout << "Enter Student Roll No: ";
        cin >> roll_no;
        cout << "Enter Student Name: ";
        cin >> name;
        std[i].setData(roll_no, name);
    }
    for(int i = 0; i<size ; i++)
    {
        std[i].displayData();
    }
    return 0;
}