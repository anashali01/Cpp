#include <iostream>
using namespace std;
int main()
{
    float mark;

    cout << "Enter Student mark :";
    cin >> mark;

    mark > 35 ? cout << "Student is pass"
              : cout << "Student is fail";
    return 0;
}