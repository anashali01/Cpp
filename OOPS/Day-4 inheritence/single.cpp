#include <iostream>
using namespace std;

class Car{
    public:
        int speed = 40;
        string name;
};
class BMW : public Car{
    public:
        int price = 300000;
        string name = "BMW";
        void show(){
            cout << "Name: " << name << endl;
            cout << "Speed: " << speed << "km-/h" << endl;
            cout << "Price: " << price << endl;
        }
};
int main()
{
    BMW bmw;
    bmw.show();
    return 0;
}