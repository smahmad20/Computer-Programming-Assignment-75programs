// ============================================
// Program 55
// Topic: Nested if
// Difficulty: moderate
//
// Question:
// Guessing game:
// Secret number is 7. If the guess is between 1 and 10, check whether it is correct, too high, or too low.
// ============================================
#include<iostream>
using namespace std;
int main()
{
    int guess;
    int secret = 7;

    cout << "Guess a number between 1 and 10: ";
    cin >> guess;

    if (guess >= 1 && guess <= 10)
    {
        if (guess == secret)
        {
            cout << "Correct! You guessed the number.";
        }
        else
        {
            if (guess > secret)
            {
                cout << "Too high";
            }
            else
            {
                cout << "Too low";
            }
        }
    }
    else
    {
        cout << "Invalid guess! Enter a number from 1 to 10.";
    }

    return 0;
}
