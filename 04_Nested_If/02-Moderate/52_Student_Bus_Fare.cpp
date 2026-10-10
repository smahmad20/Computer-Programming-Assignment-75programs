// ============================================
// Program 52
// Topic: Nested if
// Difficulty: moderate
//
// Question:
// Bus fare 100. If the person is a student (1/0), check age: up to 25 pays 50%, above 25 pays 75%. Non-students pay full fare.
// ============================================
#include<iostream>
using namespace std;
int main()
{
    int student, age;
    int fare = 100;

    cout << "Are you a student? (1 = Yes, 0 = No): ";
    cin >> student;

    if (student == 1)
    {
        cout << "Enter your age: ";
        cin >> age;

        if (age <= 25)
        {
            cout << "Bus fare = Rs. " << fare * 0.50;
        }
        else
        {
            cout << "Bus fare = Rs. " << fare * 0.75;
        }
    }
    else
    {
        cout << "Bus fare = Rs. " << fare;
    }

    return 0;
}
