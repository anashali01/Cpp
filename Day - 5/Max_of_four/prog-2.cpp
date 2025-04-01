#include <iostream>
using namespace std;
int main()
{
    int a, b, c , d;
    cout << "Enter value of a : ";
    cin >> a;

    cout << "Enter value of b : ";
    cin >> b;

    cout << "Enter value of c : ";
    cin >> c;

    cout << "Enter value of d : ";
    cin >> d;

    if (a >= b)
    {
        if (a >= c)
        {
            if (a >= d)
            {
                cout << "a is max ";
            }
            else
            {
                cout << "d is max";
            }
        }
        else
        {
            cout << "c is max";
        }
    }
    else
    {
        if (b >= c)
        {
            if (b >= d)
            {
                cout << "b is max";
            }
            else
            {
                cout << "d is max";
            }
        }
        else
        {
            if (c >= d)
            {
                cout << "c is max";
            }
            else
            {
                cout << "d is max";
            }
        }
    }
    return 0;
}