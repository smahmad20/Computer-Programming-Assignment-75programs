// ============================================
// Program 50
// Topic: Nested if
// Difficulty: easy
//
// Question:
// Online order: if the item is in stock (1/0), check if payment is done (1/0). 
// Print Confirmed, Payment pending, or Out of stock.
// ============================================
#include<iostream>
using namespace std;
int main()
{
    int stock, payment;

    cout << "Is the item in stock? (1 = Yes, 0 = No): ";
    cin >> stock;

    if (stock == 1)
    {
        cout << "Is payment completed? (1 = Yes, 0 = No): ";
        cin >> payment;

        if (payment == 1)
        {
            cout << "Confirmed";
        }
        else
        {
            cout << "Payment pending";
        }
    }
    else
    {
        cout << "Out of stock";
    }

    return 0;
}
