#include <iostream>
using namespace std;
int main()
{
    int *a = new int(5);

    delete a; // Deallocate the memory

    a = new int(10); // Reallocate memory to a new value

    return 0;
}