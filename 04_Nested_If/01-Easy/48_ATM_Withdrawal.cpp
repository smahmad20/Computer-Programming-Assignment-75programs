// ============================================
// Program 48
// Topic: Nested if
// Difficulty: easy
//
// Question:
// ATM: input balance and withdrawal. If the balance is enough, check that the amount is a multiple of 500. 
// Print cash dispensed or the correct error.
// ============================================
#include<iostream>
using namespace std;
int main()
{
int balance; 
int amount;

    cout<<"Enter your account balance: ";
    cin>>balance;

    cout<<"Enter withdrawal amount: ";
    cin>>amount;

    if(amount > 0)
    {
        if(balance >= amount)
        {
            if(amount % 500 == 0)
            {
                cout<<"Cash dispensed"<<endl;
            }
            else
            {
                cout<<"Amount must be a multiple of 500"<<endl;
            }
        }
        else
        {
            cout<<"Insufficient balance"<<endl;
        }
    }
    else
    {
        cout<<"Invalid withdrawal amount"<<endl;
    }

    return 0;
}
