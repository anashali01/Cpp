#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter The Size Of The Array: ";
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cout << "Enter The Element " << i  << ": ";
        cin >> arr[i];
    }

    cout << "The Elements Of The Array Are: ";
    for(int i = 0; i < size; i++)
    {
        cout<<"element of a["<<i<<"]: "<<arr[i]<<endl;
    }
    return 0;
}