// ==========================================
// Program 10
// Topic: If Statement
// Difficulty: Moderate
//
// Question:
// Hostel gate: input entry hour and minute (24-hour).
// If later than 10:30 PM, print "Late entry registered."
// ==========================================

#include <iostream>
using namespace std;
int main()
{
    int hour;
	int minute;

    cout<<"Enter entry hour (0-23): "<<endl;
    cin>>hour;

    cout<<"Enter entry minute (0-59): "<<endl;
    cin>>minute;

    if(hour>22 || (hour==22 && minute>30))
    {
        cout<<"Late entry registered."<<endl;
    }

    return 0;
}
