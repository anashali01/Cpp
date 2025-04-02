#include <iostream>
using namespace std;
int main()
{
    int roll_num;
    string student_name;
    float sub1 , sub2 , sub3 , total_marks , avg_marks;

    cout << "Enter Your Roll Number : ";
    cin >> roll_num;

    cout << "Enter Your Name : ";
    cin >> student_name;

    cout << "Enter Your Subject 1 Marks : ";
    cin >> sub1;

    cout << "Enter Your Subject 2 Marks : ";
    cin >> sub2;

    cout << "Enter Your Subject 3 Marks : ";
    cin >> sub3;

    total_marks = sub1 + sub2 + sub3;
    cout << "Total Marks Of Student : " << total_marks << endl;

    avg_marks = total_marks / 3 ;
    cout << "Average Marks Of Student : " << avg_marks << "%" << endl;

    if (sub1 <= 100 && sub2 <= 100 && sub3 <= 100)
    {
        if (sub1 >= 35 && sub2 >= 35 && sub3 >= 35)
        {
            if (avg_marks >= 80)
            {
                cout << "You Got A Grade :) ";
            }
            else if (avg_marks >= 60 && avg_marks <= 80)
            {
                cout << "You Got B grade :) ";
            }
            else if (avg_marks >= 50 && avg_marks <= 50)
            {
                cout << "You Got C grade :) ";
            }
            else
            {
                cout << "You Got F Grade It mean you are fail in exam !!";
            }

        }
        else
        {
            cout << "You Fail In Exam !! Better Luck Next Time :( ";
        }
    }
    else
    {
        cout << "Please Enter Your Marks In Range Of 0 - 100";
    }
    return 0;
}