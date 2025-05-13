// WAP to calculate factorial of a number using function.
#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;

    // Loop from 1 to n to calculate factorial
    for(int i = 1; i <= n; ++i) {
        fact *= i;  // Multiply fact by current number i
    }

    return fact;  // Return the final result
}

int main() {
    int number;

    // Ask the user to enter a number
    cout << "Enter a positive integer: ";
    cin >> number;

    // Check if the number is negative
    if(number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        // Call the factorial function and display the result
        cout << "Factorial of " << number << " = " << factorial(number) << endl;
    }

    return 0;
}
