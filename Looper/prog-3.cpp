#include <iostream>
using namespace std;
int main()
{
    // Variables to store input number and digits
    int num,    // Input number from user
        ld,     // Last digit
        fd;     // First digit

    // Get input from user
    cout << "Enter Number :";
    cin >> num;

    // Get last digit using modulo operator
    ld = num % 10;

    // Extract first digit by continuously dividing by 10
    while(num != 0)
    {
        fd = num % 10;    // Get current last digit
        num /= 10;        // Remove last digit
    }

    // Display sum of first and last digits
    cout << "Sum of first and last digit : " << fd + ld << endl;
    return 0;
}