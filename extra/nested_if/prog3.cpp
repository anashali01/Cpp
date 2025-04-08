#include <iostream>
using namespace std;
int main()
{
    int age;
    string nationality;

    cout << "This is the voting eligibility program.If u are citizen of india than u should vote" << endl;

    cout << "Enter your nationality : ";
    cin >> nationality;
    cout << "Enter your age: ";
    cin >> age;

    if(age >= 18 )
    {
        if(nationality == "indian")
        {
            cout << "you are eligible to vote in India." << endl;
        }
        else{
            cout << "you are not eligible to vote in India." << endl;
        }
    }
    else
    {
        cout << "you are not eligible to vote in India." << endl;
    }
    return 0;
}