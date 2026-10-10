// ============================================
// Program 74
// Topic: switch
// Difficulty: Difficult
//
// Question:
// ATM menu, balance 20000: 1 Check balance, 2 Deposit (amount must be above 0), 3 Withdraw (amount above 0, not above the balance, multiple of 500,
// each failure has its own message), 4 Exit. Print the new balance after a successful transaction. Any other choice prints "Invalid option."
// ============================================
#include <iostream>
using namespace std;
int main()
{
    int choice;
    float balance = 20000; 
	float amount;

    cout << "----- ATM MENU -----\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout<<"Current Balance: Rs. "<<balance;
            break;

        case 2:
            cout<<"Enter deposit amount: ";
            cin>>amount;

            if(amount<= 0)
                cout << "Deposit amount must be positive.";
            else
            {
                balance = balance + amount;
                cout<<"Deposit successful.\n";
                cout<<"New Balance: Rs. "<<balance;
            }
            break;

        case 3:
            cout<<"Enter withdrawal amount: ";
            cin>>amount;

            if(amount<=0)
                cout<<"Withdrawal amount must be positive.";
            else if(amount > balance)
                cout << "Insufficient balance.";
            else if((int)amount % 500 != 0 || amount != (int)amount)
                cout << "Amount must be a whole-number multiple of Rs. 500.";
            else
            {
                balance = balance - amount;
                cout<<"Withdrawal successful.\n";
                cout<<"New Balance: Rs. " << balance;
            }
            break;

        case 4:
            cout<<"Thank you for using the ATM.";
            break;

        default:
            cout<<"Invalid option.";
    }

    return 0;
}
