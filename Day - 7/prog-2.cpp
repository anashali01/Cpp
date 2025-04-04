#include <iostream>
using namespace std;
int main()
{
    // Declare three integer variables to store user input
    int a, b, c;

    // Get input from user for first number
    cout << "Enter First Number : ";
    cin >> a;
    
    // Get input from user for second number
    cout << "Enter Second Number : ";
    cin >> b;

    // Get input from user for third number
    cout << "Enter Third Number : ";
    cin >> c;

    // Using nested ternary operator to find maximum of three numbers
    // First compares a and b
    // If a is greater, then compares a and c
    // If b is greater, then compares b and c
    a >= b ? 
        a >= c ? cout << ("a is max !") : cout << ("c is max !")
           :
           b >= c ? cout << ("b is max !") : cout << ("c is max !")
           ;

    return 0;
    
}