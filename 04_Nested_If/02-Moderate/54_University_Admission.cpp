// ============================================
// Program 54
// Topic: Nested if
// Difficulty: moderate
//
// Question:
// University admission: if intermediate percentage > 60, 
// check the entry test: 50 or more is "Admitted," 40 to 49 is "Waiting list," below 40 is "Rejected." Below 60% is "Not eligible." 
// ============================================
#include<iostream>
using namespace std;
int main()
{
    float percentage;
    int test;

    cout << "Enter intermediate percentage: ";
    cin >> percentage;

    if (percentage > 60)
    {
        cout << "Enter entry test marks: ";
        cin >> test;

        if (test >= 50)
        {
            cout << "Admitted";
        }
        else
        {
            if (test >= 40)
            {
                cout << "Waiting list";
            }
            else
            {
                cout << "Rejected";
            }
        }
    }
    else
    {
        cout << "Not eligible";
    }

    return 0;
}
