#include <iostream>
using namespace std;

int main()
{
    // Initialize character variable with first lowercase letter
    char ch = 'a';

    // Print characters with gap of 4 until reaching 'z'
    do {
        cout << ch << " ";    // Print current character with space
        ch += 4;              // Increment character by 4 positions
    }
    while(ch <= 'z');        // Continue until reaching 'z'

    return 0;
}