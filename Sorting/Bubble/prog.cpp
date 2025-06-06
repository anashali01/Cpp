#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int n = 5;
    int arr[] = {64, 34, 25, 12, 22};
    bubbleSort(arr , n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for(int i = 0 ;i < n ;i++)
    {
        if(i == n - 2)
        {
            cout << "The second highest element : " << arr[i] << endl;
        }
        else
        {
            
        }
    }
    return 0;
}