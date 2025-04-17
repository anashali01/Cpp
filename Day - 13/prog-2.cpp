#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size :";
    cin >> n;
    int arr[n][n];

    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0; j<n ; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]: ";
            cin >> arr[i][j];
        }
    }
    int max = arr[0][0];
    int min = arr[0][0];
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            if(arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    cout << "Max value is :" << max << endl;
    cout << "Min value is :" << min;
    return 0;
}