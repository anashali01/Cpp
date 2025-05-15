#include <iostream>
using namespace std;
int main()
{
    int *a = new int (5);

    delete a; // Deallocate the memory

    a = NULL; // Set pointer to NULL after deletion
    // This prevents dangling pointer issues
    
    return 0;
}