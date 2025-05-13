// WAP to use all type of UDF 
#include <iostream>
using namespace std;
// TNRN
void message()
{
    cout << "This is TNRN message !!" << endl;
}
// TSRN
void addition(int a, int b)
{
    cout << "Addition of number : " << a + b << endl;
}
// TNRS
int mul()
{
    int x = 2, y = 3;
    return x * y;
}
// TSRS
int divide(int num1, int num2)
{
    return num1 / num2;
}
int main()
{
    int a = 10, b = 20;
    message();
    addition(a, b);
    cout << "The multiplication of numbers using TNRS :" << mul() << endl;
    cout << "The divison of numbers :" << divide(25, 5);

    return 0;
}