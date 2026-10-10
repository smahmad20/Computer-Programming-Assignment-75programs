// ============================================
// Program 60
// Topic: Nested if
// Difficulty: difficult
//
// Question:
// Triangle Type:
// Input three sides. First check validity (sum of any two sides must exceed the third).
// If valid, print Equilateral, Isosceles, or Scalene. If not valid, print "Not a triangle."
// ============================================
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            if (a == b && b == c)
            {
                cout << "Equilateral triangle";
            }
            else
            {
                if (a == b || a == c || b == c)
                {
                    cout << "Isosceles triangle";
                }
                else
                {
                    cout << "Scalene triangle";
                }
            }
        }
        else
        {
            cout << "Not a triangle";
        }
    }
    else
    {
        cout << "Invalid sides";
    }

    return 0;
}
