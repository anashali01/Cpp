#include <iostream>
using namespace std;
int main()
{
    // Variables to store input number, reversed number and individual digits
    int num = 1,     // Original number input by user
        rev = 0,     // To store reversed number
        digit;       // To store each digit while reversing

    // Get input from user
    cout << "Enter a number to reverse: ";
    cin >> num;

    // Continue loop until all digits are processed
    while (num != 0) {
        // Extract last digit using modulo operator
        digit = num % 10;
        
        // Build reversed number by multiplying previous result
        rev = rev * 10 + digit;
        
        // Remove last digit from number
        num = num / 10;
    }

    // Output the reversed number
    cout << "Reversed number is: " << rev << endl;
    return 0;
}