#include <iostream>
using namespace std;
int LinearSearch(int arr[] , int size , int key)
{
    for(int i = 0; i < size ; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
        
    }
}
int main()
{
    int size;
    cout << "Enter Size of array: ";
    cin >> size;
    int arr[size];
    for(int i = 0; i < size ; i++)
    {
        cout << "Enter arr[" << i << "] :";
        cin >> arr[i];
    }
    int key;
    cout << "Enter the element to search: ";
    cin >> key;
    int result = LinearSearch(arr , size , key);
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