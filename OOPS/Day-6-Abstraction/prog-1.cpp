#include <iostream>
using namespace std;
class Base
{
    public:
    virtual void demo(){
        cout << "Base class demo function" << endl;
    }
    virtual ~Base(){
        cout << "Base class destructor" << endl;
    }
};
int main()
{
    Base b;
    b.demo(); // Calls Base class demo function
    return 0;
}