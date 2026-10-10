// ==========================================
// Program 06
// Topic: If Statement
// Difficulty: Moderate
//
// Question:
// 	Pizza order: base price 800. Ask 1/0 for extra cheese (+100)
//  and 1/0 for a cold drink (+80). Print the total.
// ==========================================

#include <iostream>
#include <iostream>
using namespace std;

int main()
{
    int cheese;
	int drink;
    int total = 800;

    cout<<"Add extra cheese? (1 for yes, 0 for no): ";
    cin>>cheese;

    cout<<"Add a cold drink? (1 for yes, 0 for no): ";
    cin>>drink;

    if(cheese== 1)
    {
        total= total + 100;
    }

    if(drink ==1)
    {
        total= total + 80;
    }

    cout<<"Total price = Rs. "<<total;


    return 0;
}
