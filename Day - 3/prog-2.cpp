#include <iostream>
using namespace std;
int main()
{
    float num1 , num2;

    cout << "Enter Your First Number :";
    cin >> num1;

    cout << "Enter Your Second Number :";
    cin >> num2;

    cout << "Addition Of Both Number :" << num1 + num2 <<endl;
    cout << "Subtraction Of Both Number :" << num1 - num2 <<endl;
    cout << "Multiplication Of Both Number :" << num1 * num2 <<endl;
    cout << "Division Of Both Number :" << num1 / num2 <<endl;
    cout << "Modulus Of Both Number :" << (int)num1 % (int)num2 <<endl;

    return 0;
}