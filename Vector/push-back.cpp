#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    cout << "size od array :" << v.size() << endl;
    cout << "capacity of array :" << v.capacity() << endl;
    v.push_back(6);
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    
    v.insert(v.begin() + 2, 10);
    for(int i= 0 ; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }

    v.erase(v.begin() + 4);
    for(int i= 0 ; i < v.size(); i++)
    {
        cout << v[i] << " " ;
    }

    

    
    return 0;
}