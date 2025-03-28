#include <iostream>
using namespace std;
int main()
{
    int age;
    long int contact_num;
    string name , email;

    cout << "Enter Your Name :";
    cin >> name;

    cout << "Enter Your Age :";
    cin >> age;

    cout << "Enter Your Email :";
    cin >> email;

    cout << "Enter Your Contact Number :";
    cin >> contact_num;

    cout << "User Name : " << name <<endl;
    cout << "User Age : " << age <<endl;
    cout << "User Email : " << email <<endl;
    cout << "User Contact Number : " << contact_num <<endl;

    return 0;
}