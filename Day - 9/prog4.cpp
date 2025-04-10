#include <iostream>
using namespace std;

int main()
{
    // Variables for factorial calculation
    int fact = 1,    // Stores factorial result, initialized to 1
        num;         // Stores input number from user

    // Get input from user
    cout << "Enter a number to find factorial: ";
    cin >> num;

    // Calculate factorial using for loop
    // Multiply numbers from 1 to num
    for (int i = 1; i <= num; i++)
    {
        fact *= i;   // Multiply current number with previous result
    }

    // Display the factorial with proper formatting
    cout << "Factorial of " << num << " is: " << fact << endl;

    return 0;
}