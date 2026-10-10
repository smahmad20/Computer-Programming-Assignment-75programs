// ============================================
// Program 56
// Topic: Nested if
// Difficulty: difficult
//
// Question:
// Quadratic Equation:
// Input a, b, and c of the equation ax² + bx + c = 0. 
// If a is not 0, find D = b² - 4ac and print two real roots, one real root, or no real roots.
// If a is 0, print "Not a quadratic equation."
// ============================================
#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, D, x1, x2;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    if (a != 0)
    {
        D = b * b - 4 * a * c;

        if (D > 0)
        {
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);

            cout << "Two real roots: " << x1 << " and " << x2;
        }
        else
        {
            if (D == 0)
            {
                x1 = -b / (2 * a);
                cout << "One real root: " << x1;
            }
            else
            {
                cout << "No real roots";
            }
        }
    }
    else
    {
        cout << "Not a quadratic equation";
    }

    return 0;
}
