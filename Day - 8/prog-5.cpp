#include <iostream>
using namespace std;
int main()
{
    int i;
    for(i = 10 ; i >= 1 ; i-- )
    {
        if(i % 2 == 0)
        {
            cout << i <<endl;
        }
    }
    return 0;
}