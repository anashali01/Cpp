#include <iostream>
using namespace std;
int main()
{
    int num1 , num2 ,num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2)
    {
        if(num1 > num3)
        {
            cout << "The first number is the greatest.";
        }
        else
        {
            cout << "The third number is the greatest.";
        }
    }
    else
    {
        if(num2 > num3)
        {
            cout << "The second number is the greatest.";
        }
        else
        {
            cout << "The third number is the greatest.";
        }
    }
    return 0;
}