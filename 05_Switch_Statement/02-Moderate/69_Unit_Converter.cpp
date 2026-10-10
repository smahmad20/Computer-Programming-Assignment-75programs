// ============================================
// Program 69
// Topic: switch
// Difficulty: moderate
//
// Question:
// Unit Converter Menu — 1 Celsius to Fahrenheit, 2 Fahrenheit to Celsius, 3 Kilometres to metres, 4 Kilograms to grams. 
// Ask for the value, convert, and print. (Different formula in each case)
// ============================================
#include <iostream>
using namespace std;
int main()
{
    int choice;
    double val, result;

    cout << "--- Unit Converter ---" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "3. Kilometres to Metres" << endl;
    cout << "4. Kilograms to Grams" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> val;
            result = (val * 9.0 / 5.0) + 32;
            cout << "Result: " << result << " °F" << endl;
            break;
        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> val;
            result = (val - 32) * 5.0 / 9.0;
            cout << "Result: " << result << " °C" << endl;
            break;
        case 3:
            cout << "Enter distance in Kilometres: ";
            cin >> val;
            result = val * 1000;
            cout << "Result: " << result << " metres" << endl;
            break;
        case 4:
            cout << "Enter weight in Kilograms: ";
            cin >> val;
            result = val * 1000;
            cout << "Result: " << result << " grams" << endl;
            break;
        default:
            cout << "Error: Invalid selection." << endl;
    }

    return 0;
}
