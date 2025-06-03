#include <iostream>
using namespace std;
class Stack
{
public:
    int *arr;
    int top, capacity;
    Stack::Stack(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->top = -1;
    }
    ~Stack()
    {
        delete[] arr;
    }
    void push(int element);
    void pop();
    void peek();
    bool isEmpty();
    bool isFull();
    int size();
    void display();
};
void Stack::push(int element)
{
    if (top == capacity - 1)
    {
        cout << "Stack overflow! Cannot push " << element << endl;
        return;
    }
    arr[++top] = element;
    cout << "Pushed " << element << " onto the stack." << endl;
}
void Stack::pop()
{
    if (top == -1)
    {
        cout << "Stack underflow! Cannot pop from an empty stack." << endl;
        return;
    }
    cout << "Popped " << arr[top] << " from the stack." << endl;
    top--;
}
void Stack::peek()
{
    if (top == -1)
    {
        cout << "Stack is empty! Cannot peek." << endl;
        return;
    }
    cout << "Top element is: " << arr[top] << endl;
}
bool Stack::isEmpty()
{
    return top == -1;
}
bool Stack::isFull()
{
    return top == capacity - 1;
}
void Stack::display()
    {
        if(top == -1)
        {
            cout << "Stack is empty!" << endl;

        }
        else{
            cout << "Stack elements: ";
            for(int i = 0 ; i <=top ; i++)
            {
                cout << arr[i] << " ";
            }

        }
    }
int Stack::size()
{
    return top + 1;
}
int main()
{
    int capacity;
    cout << "Enter the capacity of the stack: ";
    cin >> capacity;
    Stack stack(capacity); // Create a stack of capacity 5
    int choice, element;
    do{
        cout << "\nMenu:\n";
        cout << "0. Exit\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. IsEmpty\n";
        cout << "5. IsFull\n";
        cout << "6. Display\n";
        cout << "7. Size\n";

        cout << " Enter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter element to push: ";
                cin >> element;
                stack.push(element);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.peek();
                break;
            case 4:
                if(stack.isEmpty())
                    cout << "Stack is empty." << endl;
                else
                    cout << "Stack is not empty." << endl;
                break;
            case 5:
                if(stack.isFull())
                    cout << "Stack is full." << endl;
                else
                    cout << "Stack is not full." << endl;
                break;
            case 6:
                stack.display();
                break;
            case 7:
                cout << " size of stack : " << stack.size() << endl;
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            
        }
    }while(choice != 0);

    return 0;
}