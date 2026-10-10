// ==========================================
// Program 07
// Topic: If Statement
// Difficulty: Moderate
//
// Question:
// Phone bill: 300 minutes are included. Input minutes talked. Above 300, extra minutes
// cost 2 each. If the extra charge exceeds 200, also print "Consider a bigger package."
// ==========================================

#include <iostream>
using namespace std;

int main()
{
    int minutes;
	int extracharge = 0;

    cout<<"Enter minutes talked: "<<endl;
    cin>>minutes;

    if(minutes>300)
    {
        extracharge=(minutes-300)*2;
    }

    cout<<"Extra charge = Rs. "<<extracharge<<endl;

    if(extracharge> 200)
    {
        cout<<"Consider a bigger package.";
    }

    return 0;
}
