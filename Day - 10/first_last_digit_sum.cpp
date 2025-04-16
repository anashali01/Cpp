// Program to find sum of first and last digits of a number

#include <iostream>
using namespace std;
int main()
{
    // Variables to store the number and its digits
    int num,    // Input number from user
        fd,     // First digit
        ld;     // Last digit

    // Get the number from user
    cout << "Enter Number :";
    cin >> num;

    // Extract last digit using modulo operator (remainder when divided by 10)
    ld = num % 10;

    // Loop to find first digit by continuously dividing by 10
    while (num != 0)
    {
        fd = num % 10;    // Get current last digit
        num /= 10;        // Remove last digit
    }

    // Display sum of first and last digits
    cout << "The sum of first and last digit :" << ld + fd;
    return 0;
}