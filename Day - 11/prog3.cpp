#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // Array of integers

    cout << "The size of array :" << sizeof(arr) / sizeof(arr[0]) << endl; // Output: 5
    return 0;
}