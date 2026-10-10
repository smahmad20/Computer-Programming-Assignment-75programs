// ==========================================
// Program 42
// Topic: If-Else-if
// Difficulty: Difficult
//
// Question:
// Income tax on yearly income: up to 500000: none, 500001 to 1000000: 5% of the amount
// above 500000, above 1000000: 25000 + 10% of the amount above 1000000.
// ==========================================

#include <iostream>
using namespace std;
int main()
{
    double income, tax;

    cout<<"Enter yearly income: ";
    cin >>income;

    if(income<=500000)
    {
        tax = 0;
    }
    else if(income<=1000000)
    {
        tax=(income-500000)*5/100;
    }
    else
    {
        tax=25000+(income-1000000)*10/100;
    }

    cout<<"Tax: "<<tax<<endl;
    return 0;
}
