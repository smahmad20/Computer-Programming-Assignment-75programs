// ============================================
// Program 68
// Topic: switch
// Difficulty: moderate
//
// Question:
// Restaurant Menu — 1 Burger (350), 2 Pizza (900), 3 Fries (200), 4 Cola (100), 5 Shake (250). 
// Input choice and quantity. Add 10% service charge and print the bill. (Menu choice followed by calculation)
// ============================================
#include <iostream>
using namespace std;
int main()
{
    int choice, quantity;
    double price = 0;

    cout << "--- Restaurant Menu ---" << endl;
    cout << "1. Burger (350)" << endl;
    cout << "2. Pizza (900)" << endl;
    cout << "3. Fries (200)" << endl;
    cout << "4. Cola (100)" << endl;
    cout << "5. Shake (250)" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1: price = 350; break;
        case 2: price = 900; break;
        case 3: price = 200; break;
        case 4: price = 100; break;
        case 5: price = 250; break;
        default:
            cout << "Invalid menu selection!" << endl;
            return 0;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    double subtotal = price * quantity;
    double serviceCharge = subtotal * 0.10;
    double totalBill = subtotal + serviceCharge;

    cout << "\n--- Final Bill ---" << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "10% Service Charge: " << serviceCharge << endl;
    cout << "Total Bill: " << totalBill << endl;

    return 0;
}
