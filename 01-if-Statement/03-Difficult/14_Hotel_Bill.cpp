// ==========================================
// Program 14
// Topic: If Statement
// Difficulty: Difficult
//
// Question:
// Hotel bill: room is 5000 per night. Input nights and breakfast choice (y/n). If nights = 7
// one night is free. If breakfast is 'y', add 500 per night. Print the total.
// ==========================================

#include <iostream>
using namespace std;
int main()
{
    int nights;
	int total;
    char breakfast;

    cout<<"Enter number of nights: "<<endl;
    cin>>nights;

    cout<<"Include breakfast? (y/n): "<<endl;
    cin >> breakfast;

    total =nights*5000;

    if (nights >= 7)
    {
        total = total - 5000;
    }

    if (breakfast== 'y'||breakfast =='Y')
    {
        total =total+(nights*500);
    }

    cout<<"Total hotel bill = Rs. "<<total;

    return 0;
}
