#include <iostream>
using namespace std;
int main()
{
    float mark;
    cout << "Enter a number: ";
    cin >> mark;

    if(mark >= 35)
    {
        cout << "You have paassed the exam"; 
    }
    else{
        cout << "You have failed the exam";
    }
    
    return 0;
}