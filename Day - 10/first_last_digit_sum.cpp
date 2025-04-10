#include <iostream>
using namespace std;
int main()
{
    int num , fd , ld ;

    cout << "Enter Number :";
    cin >> num;

    ld = num % 10;
    while (num != 0)
    {
        fd = num % 10;
        num /= 10;

    }
    cout << "The sum of first and last digit :" << ld + fd;
    return 0;
}