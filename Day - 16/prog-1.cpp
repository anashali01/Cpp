#include <iostream>
#define PI  3.14
using namespace std;
int main()
{
    int r;

    cout << "Enter Your radius :";
    cin >> r;

    int *ptr;
    float *pt;

    ptr = &r;
    float area = PI * (*ptr * *ptr);
    pt = &area;

    cout << "Area or circle is : " << *pt;

    return 0;
}