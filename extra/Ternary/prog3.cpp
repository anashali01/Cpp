#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter your number :";
    cin >> num;

    num % 2 == 0 ? cout << "Number is even"
                 :cout << "Number is odd";
    return 0;
}