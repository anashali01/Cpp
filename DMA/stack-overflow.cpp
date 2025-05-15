#include <iostream>
using namespace std;
void demo()
    {
        cout << "hello guys" << endl;
        demo();
    }

int main()
{
    demo(); // This will cause a stack overflow
    return 0;
}