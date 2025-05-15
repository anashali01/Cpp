#include <iostream>
using namespace std;
int main()
{
    int *a = new int(5);

    delete a; // Deallocate the memory
    
    return 0;
}