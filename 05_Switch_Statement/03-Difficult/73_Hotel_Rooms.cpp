// ============================================
// Program 73
// Topic: switch
// Difficulty: Difficult
//
// Question:
// Hotel bill: input room type (1 Standard 4000, 2 Deluxe 7000, 3 Suite 12000), nights (at least 1) and breakfast (y/n, 500 per night).
// Print an error for invalid room type or nights. For 5 or more nights give 10% off the room cost. Add 8% tax. Print an itemised bill: room, breakfast, discount, tax, grand total.
// ============================================
#include <iostream>
using namespace std;
int main()
{
int room;
int nights;
    char breakfast;
    int rate = 0,
	int roomCost;
	int breakfastCost;
    float discount = 0;
	float tax;
	float total;

    cout << "1. Standard - Rs. 4000/night\n";
    cout << "2. Deluxe - Rs. 7000/night\n";
    cout << "3. Suite - Rs. 12000/night\n";
    cout << "Select room type: ";
    cin >> room;

    cout << "Enter number of nights: ";
    cin >> nights;

    if(room < 1||room > 3 ||nights < 1)
    {
        cout<<"Invalid room type or number of nights."<<endl;
        return 0;
    }

    switch(room)
    {
        case 1:
            rate =4000;
            break;

        case 2:
            rate =7000;
            break;

        case 3:
            rate =12000;
            break;
    }

    cout << "Breakfast included? (y/n): ";
    cin >> breakfast;

    if (breakfast != 'y' && breakfast != 'Y' &&
        breakfast != 'n' && breakfast != 'N')
    {
        cout << "Invalid breakfast choice.";
        return 0;
    }

    roomCost = rate * nights;

    if (breakfast == 'y' || breakfast == 'Y')
        breakfastCost = 500 * nights;
    else
        breakfastCost = 0;

    if (nights >= 5)
        discount = roomCost * 0.10;

    tax = (roomCost - discount + breakfastCost) * 0.08;
    total = roomCost - discount + breakfastCost + tax;

    cout << "\n----- HOTEL BILL -----\n";
    cout << "Room Cost: Rs. " << roomCost << endl;
    cout << "Breakfast: Rs. " << breakfastCost << endl;
    cout << "Discount: Rs. " << discount << endl;
    cout << "Tax (8%): Rs. " << tax << endl;
    cout << "Grand Total: Rs. " << total << endl;
    return 0;
}
