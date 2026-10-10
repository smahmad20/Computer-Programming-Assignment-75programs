// ============================================
// Program 59
// Topic: Nested if
// Difficulty: difficult
//
// Question:
// Recharge Bonus:
// If recharge is greater than 500, first recharge (1/0) gets a 100 bonus, otherwise 50. 
// If recharge is 200 to 499, bonus is 20. Below 200, no bonus. Print the bonus.
// ============================================
#include<iostream>
using namespace std;
int main()
{
    int recharge, first, bonus = 0;

    cout << "Enter recharge amount: ";
    cin >> recharge;

    if (recharge >= 0)
    {
        if (recharge > 500)
        {
            cout << "First recharge? (1 = Yes, 0 = No): ";
            cin >> first;

            if (first == 1)
            {
                bonus = 100;
            }
            else
            {
                bonus = 50;
            }
        }
        else
        {
            if (recharge >= 200)
            {
                bonus = 20;
            }
            else
            {
                bonus = 0;
            }
        }

        cout << "Recharge bonus = " << bonus;
    }
    else
    {
        cout << "Invalid recharge amount";
    }

    return 0;
}
