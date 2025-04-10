#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Enter the operation you want to perform (+, -, *, /): ";
    char operation;

    switch (operation)
    {
    case '+':
        cout << "Result Of + :" << num1 + num2;
        break;
    case '-':
        cout << "Result of - :" << num1 - num2;
        break;
    case '*':
        cout << "Result of * :" << num1 * num2;
        break;
    case '/':
        cout << "Result of / :" << num1 / num2;
        break;
    default:
        cout << "Invalid operation. Please enter one of +, -, *, /.";
        break;
    }
    return 0;
}