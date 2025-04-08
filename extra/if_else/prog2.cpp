#include <iostream>
using namespace std;
int main()
{
    float mark;

    cout << "Enter a number: ";
    cin >> mark;

    if(mark >= 40 )
    {
        cout << "You have passed the exam" << endl; 
    }
    else
    {
        cout << "You have failed the exam" << endl;
    }
    return 0;
}