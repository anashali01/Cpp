// Recursion
#include <iostream>
using namespace std;

int fact(int num);


int main()
{
    int num;

    cout << "Enter Number For Factorial : ";
    cin >> num;

    cout << "The Factorial of " << num << " is : " << fact(num);
    return 0;
}

int fact(int num)
{
    if(num <= 1) return 1;
    return num * fact(num - 1);
}
