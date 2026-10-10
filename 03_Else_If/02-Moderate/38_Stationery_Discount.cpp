// ==========================================
// Program 38
// Topic: If-Else-if
// Difficulty: Moderate
//
// Question:
// Bulk stationery order, 40 per notebook. 1 to 9 notebooks: no discount, 10 to 49: 10%, 50 to 99: 20%, 100+: 30%.
// Input quantity and print the total bill.
// ==========================================

#include <iostream>
using namespace std;
int main()
{
int quantity;
double pricepernotebook = 40.0;
double finalBill;
double totalCost;

    cout << "Enter number of notebooks: ";
    cin >> quantity;

    if (quantity<= 0) {
        cout<<"Invalid quantity!"<<endl;
}

    totalCost = quantity*pricepernotebook;
    finalBill = 0.0;

    if (quantity< 10) {
        finalBill= totalCost;
    } else if (quantity <= 49) {
        finalBill= totalCost - (totalCost* 0.10); 
    } else if (quantity <= 99) {
        finalBill= totalCost - (totalCost* 0.20);
    } else {
        finalBill= totalCost - (totalCost* 0.30);
    }

    cout << "Total Bill: " << finalBill << endl;

    return 0;
}
