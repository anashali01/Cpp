// User-Friendly Salary Counter 
#include <iostream>
using namespace std;
int main()
{
    float salary;
    int month;

    cout<<"Enter Your Monthly Salary :";
    cin>>salary;

    cout<<"Enter Month :";
    cin>>month;

    cout<<"Your Total Salary Of " << month <<" Month : "<<salary*month;
    return 0;
}