#include <iostream>
using namespace std;
int main()
{
    int fact = 1 , num;
    cout << "Enter a number to find factorial: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    cout << "Factioral of" << num << " " << " is " << fact;
    return 0;
}