#include <iostream>
using namespace std;
class children1{
    public:
        void show(){
            cout << "This is children1 class" << endl;
        }
};
class children2{
    public:
        void show(){
            cout << "This is children2 class" << endl;
        }
};
class parent : public children1 , public children2{
    public:
        void show(){
            cout << "This is parent class" << endl;
        }
};
int main()
{

    parent p;
    p.show();
    p.children1::show(); // To call show() from children1
    p.children2::show(); // To call show() from children2
    return 0;
}