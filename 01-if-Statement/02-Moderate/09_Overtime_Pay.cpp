// ==========================================
// Program 09
// Topic: If Statement
// Difficulty: Moderate
//
// Question:
// Input hours worked in a week. Pay is 500 per hour. If hours exceed 40,
// add overtime of 250 extra per hour above 40. Print the pay.
// ==========================================

#include <iostream>
using namespace std;

int main()
{
    double hours, pay;

    cout<<"Enter hours worked in a week: "<<endl;
    cin>>hours;

    pay = hours * 500;

    if(hours>40)
    {
    pay =pay+(hours-40)*250;
    }

    cout<<"Total pay = Rs. "<<pay<<endl;


    return 0;
}
