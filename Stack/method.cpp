// Stack with push()
#include <iostream>
using namespace std;
int stack[100] , top = -1;

void push(int element)
{
    top++;
    stack[top] = element;
}

void pop()
{
    stack[top] = 0;
    top--;
}

void peek()
{
    cout << "Top element is: " << stack[top] << endl;
}

int main()
{

    int numberOfElements, element;
    cout << "Enter the number of elements to be pushed onto the stack: ";
    cin >> numberOfElements;

    for(int i = 0 ; i < numberOfElements ; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        push(element);
    }
    cout << "Elements in the stack: ";
    for(int i = 0 ; i <= top ; i++)
    {
        cout << stack[i] << " ";
    }

    pop();
    cout << "\nAfter popping an element, the stack is: ";
    for(int i = 0 ; i <= top ; i++)
    {
        cout << stack[i] << " ";
    }
    cout << endl;

    peek();
    cout << "\nAfter peeking, the top element is: ";

    return 0;
}