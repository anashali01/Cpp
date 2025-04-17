#include <iostream>
using namespace std;
int main()
{
    int row, column, choice, index;
    cout << "Enter Row size :";
    cin >> row;
    cout << "Enter Column size :";
    cin >> column;
    int arr[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    do
    {
        int sum = 0;
        cout << "Enter 0 for exit !!" << endl;
        cout << "Enter 1 for sum of row !!" << endl;
        cout << "Enter 2 for sum of column !!" << endl;
        cout << "Enter 3 for diagonal !!" << endl;

        cout << "Please enter your choice :";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Index of row for sum :";
            cin >> index;
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    if (i == index)
                    {
                        sum += arr[i][j];
                    }
                }
            }
            cout << "Sum of row is :" << sum;
            break;
        case 2:
            cout << "Enter Index of column for sum :";
            cin >> index;
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    if (j == index)
                    {
                        sum += arr[i][j];
                    }
                }

            }
            cout << "Sum of column is :" << sum;
            break;
        case 3:
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < column; j++)
                {
                    if (j == i)
                    {
                        cout << arr[i][j] << " "; 
                    }
                    else{
                        cout << "  ";
                    }
                }
                cout << endl;
            }
            cout << "Sum of column is :" << sum;
            break;
        }
    } while (choice != 0);
    return 0;
}