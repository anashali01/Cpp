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
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0; j<n ; j++)
        {
            cout << arr[i][j] << " ";
           
        }
        cout << endl;
    }
    return 0;
}