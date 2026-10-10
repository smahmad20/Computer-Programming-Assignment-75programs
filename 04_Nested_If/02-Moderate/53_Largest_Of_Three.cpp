// ============================================
// Program 53
// Topic: Nested if
// Difficulty: moderate
//
// Question:
// Input three different numbers and find the largest using nested if.
// ============================================
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter three different numbers: ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "Largest number = " << a;
        }
        else
        {
            cout << "Largest number = " << c;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Largest number = " << b;
        }
        else
        {
            cout << "Largest number = " << c;
        }
    }

    return 0;
}
