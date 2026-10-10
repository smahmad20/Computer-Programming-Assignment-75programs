// ============================================
// Program 57
// Topic: Nested if
// Difficulty: difficult
//
// Question:
// Loan Slip:
// Input age, monthly salary, and number of existing loans (all 0 or more, otherwise error).
// Age must be 21 to 60, salary at least 50000, and existing loans limited to 10 × salary. One or more loans: limit is 5 × salary. 
// If not eligible, print the exact reason (age or salary).
// If eligible, print a slip with the limit and a monthly instalment over 12 months.
// ============================================
#include<iostream>
using namespace std;
int main()
{
    int age, loans;
    double salary, limit, installment;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter monthly salary: ";
    cin >> salary;

    cout << "Enter number of existing loans: ";
    cin >> loans;

    if (age >= 0 && salary >= 0 && loans >= 0)
    {
        if (age >= 21 && age <= 60)
        {
            if (salary >= 50000)
            {
                if (loans == 0)
                {
                    limit = salary * 10;
                }
                else
                {
                    limit = salary * 5;
                }

                installment = limit / 12;

                cout << "Loan limit = " << limit << endl;
                cout << "Monthly installment = " << installment;
            }
            else
            {
                cout << "Not eligible: Salary is below 50000";
            }
        }
        else
        {
            cout << "Not eligible: Age must be 21 to 60";
        }
    }
    else
    {
        cout << "Invalid input";
    }

    return 0;
}
