#include <iostream>
using namespace std;
int main()
{
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;

    if (mark <= 100)
    {
        if (mark >= 90)
        {
            cout << "You got an A grade.";
        }
        else if (mark >= 80 && mark < 90)
        {
            cout << "You got a B grade.";
        }
        else if (mark > 70 && mark < 80)
        {
            cout << "You got a C grade.";
        }
        else
        {
            cout << "You got a D grade.";
        }
    }
    else
    {
        cout << "Invalid mark. Please enter a mark between 0 and 100.";
    }
    return 0;
}