#include <iostream>
using namespace std;
void insertionSort(int arr[] , int n)
{
    for (int i = 1; i<n ; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j]>key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array: ";
    for(int i =0; i < n ;i++)
    {
        cin >> arr[i];
    }
    printArray(arr , n);
    insertionSort(arr , n);
    printArray(arr , n);
    return 0;
}