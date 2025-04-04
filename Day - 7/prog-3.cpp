#include <iostream>
using namespace std;
int main()
{
    // Declare variable to store student's grade
    char grade;

    // Get grade input from user (missing input statement)
    cout << "Enter your grade (A/B/C): ";
    cin >> grade;

    // Switch statement to check grade and display appropriate message
    switch (grade)
    {
        case 'A':
            cout << "Congratulaction You Got A Grade";
            break;  // Add break to prevent fall-through

        case 'B':
            cout << "Congratulation You Got B Grade";
            break;  // Add break to prevent fall-through

        case 'C':
            cout << "Congratulation You Got C Grade";
            break;  // Add break to prevent fall-through

        default:
            cout << "OOPS ! You faild in exam !!";
            break;  // Add break for consistency
    }

    return 0;
}