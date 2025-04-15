#include <iostream>
using namespace std;

int main()
{
    // Variables to store input number and count of digits
    int num,                  // Stores the input number
        digitCounter = 0;     // Counts number of digits, initialized to 0

    // Get input number from user
    cout << "Enter number :";
    cin >> num;

    // Count digits by repeatedly dividing by 10
    while(num != 0){
        num /= 10;           // Remove last digit by integer division
        digitCounter++;      // Increment digit counter
    }

    // Display the total number of digits
    cout << "Total number of digits: " << digitCounter << endl;
    return 0;
}