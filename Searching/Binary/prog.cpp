#include <iostream>
using namespace std;
int BinarySearch(int arr[] , int size , int key)
{
    int low = 0;
    int high = size - 1;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] == key)
        {
            return mid; // Element found
        }
        else if(arr[mid] < key)
        {
            low = mid + 1; // Search in the right half
        }
        else
        {
            high = mid - 1; // Search in the left half
        }
    }
}
int main()
{
    int size;
    cout << "Enter Size of array: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        cout <<"Enter arr[" << i << "] :";
        cin >> arr[i]; 
    }
    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int result = BinarySearch(arr, size, key);
    if(result != -1 && result < size)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}