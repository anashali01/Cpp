#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter your number :";
    cin >> num;

    num > 0 ? cout << "Number is positive"
            : cout << "Number is negative";
    return 0;
}