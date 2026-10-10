// ============================================
// Program 49
// Topic: Nested if
// Difficulty: easy
//
// Question:
// Gym entry: if the person is a member (1/0), check whether this month's fee is paid (1/0).
// Print Welcome, Please pay your fee, or Members only.
// ============================================
#include<iostream>
using namespace std;

int main()
{
 int member, fee;

    cout << "Are you a member? (1 = Yes, 0 = No): ";
    cin >> member;

    if (member == 1)
    {
        cout << "Is this month's fee paid? (1 = Yes, 0 = No): ";
        cin >> fee;

        if (fee == 1)
        {
            cout << "Welcome";
        }
        else
        {
            cout << "Please pay your fee";
        }
    }
    else
    {
        cout << "Members only";
    }

    return 0;
} 
