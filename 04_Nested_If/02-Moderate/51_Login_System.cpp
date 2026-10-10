// ============================================
// Program 51
// Topic: Nested if
// Difficulty: moderate
//
// Question:
// Login: stored username 'A' and PIN 4321. If the username matches, check the PIN.
// Print Welcome, Wrong PIN, or Unknown user.
// ============================================
#include<iostream>
using namespace std;
int main()
{
    char username;
    int pin;

    cout << "Enter username: ";
    cin >> username;

    if (username == 'A')
    {
        cout << "Enter PIN: ";
        cin >> pin;

        if (pin == 4321)
        {
            cout << "Welcome";
        }
        else
        {
            cout << "Wrong PIN";
        }
    }
    else
    {
        cout << "Unknown user";
    }

    return 0;
}

