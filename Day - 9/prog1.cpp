#include <iostream>
using namespace std;
int main()
{
    // Initialize variables for Fibonacci sequence
    int num,          // Number of terms to generate
        f,            // Current Fibonacci number
        f1 = 0,       // First number in sequence
        f2 = 1,       // Second number in sequence
        i = 1;        // Counter variable

    // Get number of terms from user
    cout << "Enter a number: ";
    cin >> num;

    // Generate Fibonacci sequence using while loop
    while (i <= num)
    {
        // Calculate next number in sequence
        f = f1;           // Store current number
        f1 = f + f2;     // Calculate next number
        f2 = f;          // Update previous number

        // Increment counter
        i++;
        
        // Print current Fibonacci number
        cout << f << " ";
    }
    return 0;
}