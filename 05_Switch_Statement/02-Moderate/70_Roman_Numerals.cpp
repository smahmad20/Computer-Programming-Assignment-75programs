// ============================================
// Program 70
// Topic: switch
// Difficulty: moderate
//
// Question:
// Roman Numerals — Input a number from 1 to 10 and print it in Roman numerals.
// Otherwise print an error. (Direct mapping with default)
// ============================================
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number (1 to 10): ";
    cin >> num;

    switch (num) {
        case 1: cout << "Roman numeral: I" << endl; break;
        case 2: cout << "Roman numeral: II" << endl; break;
        case 3: cout << "Roman numeral: III" << endl; break;
        case 4: cout << "Roman numeral: IV" << endl; break;
        case 5: cout << "Roman numeral: V" << endl; break;
        case 6: cout << "Roman numeral: VI" << endl; break;
        case 7: cout << "Roman numeral: VII" << endl; break;
        case 8: cout << "Roman numeral: VIII" << endl; break;
        case 9: cout << "Roman numeral: IX" << endl; break;
        case 10: cout << "Roman numeral: X" << endl; break;
        default:
            cout << "Error: Please enter a number between 1 and 10." << endl;
    }

    return 0;
}
