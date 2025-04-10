#include <iostream>
using namespace std;
int main()
{
    int num1 , num2;

    cout << "Enter two numbers :";
    cin >> num1 >> num2;

    num1 > num2 ? cout << "Number 1 is bigger than Number 2"
                : cout << "Number 2 is bigger than Number 1";
    return 0;
}