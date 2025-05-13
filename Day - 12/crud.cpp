// CRUD Operation
#include <iostream>
using namespace std;
int main()
{
    int size, choice, index, element;
    cout << "Enter size of array :";
    cin >> size;
    int arr[size];
    do
    {
        cout << "-- Enter 0 for EXIT --" << endl;
        cout << "-- Enter 1 for INSERT --" << endl;
        cout << "-- Enter 2 for UPDATE --" << endl;
        cout << "-- Enter 3 for DELETE --" << endl;
        cout << "-- Enter 4 for VIEW --" << endl;

        cout << "Enter Your Choice :";
        cin >> choice;

        switch (choice)
        {
        case 1:
            for (int i = 0; i < size; i++)
            {
                cout << "Enter The Element arr[" << i << "]" << ": ";
                cin >> arr[i];
            }
            break;
        case 2:
            cout << "Enter Your index :";
            cin >> index;
            cout << "Enter Your element :";
            cin >> element;
            arr[index] = element;
            break;
        case 3:
            cout << "Enter index for delete :";
            cin >> index;
            for (int i = index; i < size; i++)
            {
                arr[i] = arr[i + 1];
            }
            size--;
            break;
        case 4:
            for (int i = 0; i < size; i++)
            {
                cout << "element of a[" << i << "]: " << arr[i] << endl;
            }
            break;
        }
    } while (choice != 0);

    return 0;
}