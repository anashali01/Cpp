#include <iostream>
using namespace std;
class Base
{
    public:
    void demo(){
        cout << "Base class demo function" << endl;
    }
};
class Derived : public Base
{
    public:
    void demo(){
        cout << "Derived class demo function" << endl;
    }
};
int main()
{
    Base b;
    Derived d;
    b.demo(); // Calls Base class demo function
    d.demo(); // Calls Derived class demo function

    return 0;
}