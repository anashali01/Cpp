#include <iostream>
using namespace std;
int main()
{
   int num , ld , sum = 0;

   cout << "Enter your number :";
   cin >> num;

   while(num != 0)
   {
    ld = num % 10;
    sum += ld;
    num /= 10;
   }

   cout << "Sum of all digit :" << sum ;
    return 0;
}