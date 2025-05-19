#include <iostream>
using namespace std;

int main()
{
    // Number of rows in pattern
    const int ROWS = 5;
    
    // Outer loop for rows (5 to 1)
    for(int i = 5; i >= 1; i--)
    {
        // Inner loop to print numbers in each row
        for(int j = 1; j <= 5-i+1; j++)
        {
            cout << i;  // Print current row number
        }
        cout << endl;   // Move to next line after each row
    }
    
    return 0;

}

