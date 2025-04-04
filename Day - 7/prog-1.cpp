#include <iostream>
using namespace std;
int main()
{
    // Declaring variables for different types of salaries
    float b_salary,    // Basic salary
          h_salary,    // House rent allowance (50% of basic)
          t_salary,    // Travel allowance (20% of basic)
          d_salary,    // Dearness allowance (10% of basic)
          p_salary,    // Performance allowance (5% of basic)
          gross_salary,// Total salary before deductions
          pf_salary = 4000,  // Provident fund (fixed)
          pt_salary = 400,   // Professional tax (fixed)
          tds_salary, // Tax deducted at source (10% of gross)
          net_salary; // Final salary after all deductions

    // Input basic salary from user
    cout << "Enter Your Basic Salary : ";
    cin >> b_salary;

    // Calculate different allowances
    h_salary = b_salary * 0.1;  // 10% of basic
    t_salary = b_salary * 0.02;  // 2% of basic
    d_salary = b_salary * 0.1;  // 10% of basic
    p_salary = b_salary * 0.05; // 5% of basic

    // Calculate gross salary (basic + all allowances)
    gross_salary = b_salary + h_salary + t_salary + d_salary + p_salary;
    cout << "Your Gross Salary Is : " << gross_salary << endl;

    // Display fixed deductions
    cout << "Your PF Salary Is : " << pf_salary << endl;
    cout << "Your PT Salary Is : " << pt_salary << endl;

    // Calculate TDS (10% of gross salary)
    tds_salary = gross_salary * 0.1;

    // Calculate net salary (gross - all deductions)
    net_salary = gross_salary - (pf_salary + pt_salary + tds_salary);
    cout << "Your Net Salary Is : " << net_salary << endl;

    return 0;
}