#include <iostream>
using namespace std;
class SelectionSort{
    public:
    void selectionSort(int arr[] , int n)
    {
        int min , temp;
        for(int i = 0; i<n-1 ; i++)
        {
            min = i;
            for(int j = i+1 ; j<n ; j++)
            {
                if(arr[j] < arr[min])
                {
                    min = j;
                }
            }
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    void printArray(int arr[] , int n)
    {
        for(int i = 0; i<n ; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    int n;
    cout << "Enter Size of array: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i<n ; i++)
    {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
    SelectionSort s;
    s.selectionSort(arr, n);
    s.printArray(arr, n);
    return 0;
}