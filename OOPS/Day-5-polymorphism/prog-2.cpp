#include <iostream>
using namespace std;
class Base
{
    public:
    int add(int a, int b )
    {
        return a + b;
    }
    int add(double a , double b )
    {
        return a + b;
    }
};
int main()
{
    Base b;
    cout << b.add(10, 20) << endl; // Calls int add(int, int)
    cout << b.add(10.5, 20.75) << endl; // Calls int add(double, double)

    return 0;
}