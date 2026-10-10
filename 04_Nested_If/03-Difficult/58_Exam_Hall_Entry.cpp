// ============================================
// Program 58
// Topic: Nested if
// Difficulty: difficult
//
// Question:
// Exam Hall Entry:
// Input admit card (1/0) and minutes late (0 or more). No admit card: print "Not allowed: no admit card."
// With a card, allow up to 15 minutes; 16 to 30 minutes is allowed with a fine of 100; more than 30 minutes is not allowed.
// Print the decision and fine amount.
// ============================================
#include<iostream>
using namespace std;
int main()
{
    int card, minutes;
    int fine = 0;

    cout << "Admit card available? (1 = Yes, 0 = No): ";
    cin >> card;

    cout << "Enter minutes late: ";
    cin >> minutes;

    if (card == 1)
    {
        if (minutes >= 0)
        {
            if (minutes <= 15)
            {
                cout << "Allowed";
            }
            else
            {
                if (minutes <= 30)
                {
                    fine = 100;
                    cout << "Allowed with fine" << endl;
                    cout << "Fine amount = " << fine;
                }
                else
                {
                    cout << "Not allowed: More than 30 minutes late";
                }
            }
        }
        else
        {
            cout << "Invalid minutes";
        }
    }
    else
    {
        cout << "Not allowed: No admit card";
    }

    return 0;
}
