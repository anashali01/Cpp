#include <iostream>
using namespace std;

class bank {
public:
    string name;
    int account_no;
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> account_no;
    }
    
};

class savings : public bank {
public:
    int balance;
    bool is_savings = false;
    string account_type = "Savings";
    void getData() {
        bank::getData();
        cout << "Enter balance: ";
        cin >> balance;
        is_savings = true;
    }
   
};

class current : public bank {
public:
    int balance;
    bool is_current = false;
    string account_type = "Current";
    void getData() {
        bank::getData();
        cout << "Enter balance: ";
        cin >> balance;
        is_current = true;
    }
};

class alldata {
public:
    savings s;
    current c;
    void showAll() {
        if(s.is_savings || c.is_current){ 
            int choice;
            cout << "press 1 for View savings account details" << endl;
            cout << "press 2 for View current account details" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            switch(choice){
                case 1:
                    cout << "\nSavings Account Details:" << endl;
                    cout << "Name: " << s.name << endl;
                    cout << "Account Number: " << s.account_no << endl;
                    cout << "Balance: " << s.balance << endl;
                    cout << "Account Type: " << s.account_type << endl;
                    break;
                case 2:
                    cout << "\nCurrent Account Details:" << endl;
                    cout << "Name: " << c.name << endl;
                    cout << "Account Number: " << c.account_no << endl;
                    cout << "Balance: " << c.balance << endl;
                    cout << "Account Type: " << c.account_type << endl;
                    break;
                default:
                    cout << "Invalid choice" << endl;
            }
        }
        else{
            cout << "\nNo account data available." << endl;
        }
        
    }
};

int main() {
    int choice;
    alldata a;
    do {
        cout << "\nChoose your account type:" << endl;
        cout << "1. Savings Account" << endl;
        cout << "2. Current Account" << endl;
        cout << "3. Show All Data" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                a.s.getData();
                break;
            case 2:
                a.c.getData();
                break;
            case 3:
                a.showAll();
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 4);
    
    cout << "Thank you for using our service!" << endl;
    return 0;
}