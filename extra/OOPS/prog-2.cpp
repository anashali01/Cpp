// 2. Rectangle Area and Perimeter
#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int width;

public:
    double area()
    {
        return length * width;
    }
    double perimeter()
    {
        return 2 * (length + width);
    }
};
class value : public Rectangle
{
    public:
    void input()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;    
    }
    void display()
    {
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }

};

int main()
{
    value v;
    v.input();
    v.display();
    
return 0;
}