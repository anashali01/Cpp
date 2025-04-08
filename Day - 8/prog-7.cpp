// 1
// 1 2
// 1 3 5
// 1 6 11 16
// 1 17 33 49 65
#include <iostream>
using namespace std;
int main()
{
    int i , temp ;
    for(i = 1 ; i <= 3 ; i++)
    {
        cout << "1 "; 
        for(int j = 1 ; j <= i ; j++)
        {
          if(j==1){
            cout << i + j << " ";
          }   
          if(j==2){
            cout << (j+i)+(i-1)<< " ";
          }
          if(j==3){
            cout << (j+i)+(i-2)<< " ";
          }
          if(j==4){
            cout << (j+i)+(i-3)<< " ";
          }
          
        }
        cout << endl;
    }
    return 0;
}