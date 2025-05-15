#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of heap memory : ";
    cin >> size;
    int *a = new int(size); // Dynamically allocate memory for an array of integers
    
    return 0;
}