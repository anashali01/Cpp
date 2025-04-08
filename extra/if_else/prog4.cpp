#include <iostream>
using namespace std;
int main()
{
    int num1 , num2 ;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2 ;

    if(num1 > num2)
    {
        cout << "The first number is greater than the second number.";
    }
    else
    {
        cout << "The first number is not greater than the second number.";
    }
    return 0;
}