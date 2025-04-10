#include <iostream>
using namespace std;
int main()
{
    char letter;

    cout << "Enter a letter :";
    cin >> letter;

    switch(letter)
    {
        case 'a':
            cout << "Letter is vowel";
            break;
        case 'e':
            cout << "Letter is vowel";
            break;
        case 'i':
            cout << "Letter is vowel";
            break;
        case 'o':
            cout << "Letter is vowel";
            break;
        case 'u':
            cout << "Letter is vowel";
            break;
        case 'A':
            cout << "Letter is vowel";
            break;      
        case 'E':   
            cout << "Letter is vowel";
            break;
        case 'I':
            cout << "Letter is vowel";
            break;
        case 'O':
            cout << "Letter is vowel";
            break;
        case 'U':
            cout << "Letter is vowel";
            break;
        default:
            cout << "Letter is consonant";
            break;    
    }
    return 0;
}