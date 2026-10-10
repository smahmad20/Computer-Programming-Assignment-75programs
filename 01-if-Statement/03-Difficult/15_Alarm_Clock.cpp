// ==========================================
// Program 15
// Topic: If Statement
// Difficulty: Difficult
//
// Question:
// Alarm clock: input current hour (0–23) and hours until alarm. Alarm hour = current + hours.
// If it reaches 24 or more, subtract 24. If the result is 0, also print "Alarm is at midnight."
// ==========================================

#include <iostream>
using namespace std;
int main()
{
   int currenthour;
   int hoursuntil;
   int alarmhour;

    cout << "Enter current hour (0-23): "<<endl;
    cin >> currenthour;

    cout << "Enter hours until alarm: "<<endl;
    cin >> hoursuntil;

    alarmhour = currenthour + hoursuntil;

    if(alarmhour>= 24)
    {
        alarmhour =alarmhour - 24;
    }

    cout<<"Hours left in Alarm = "<<alarmhour<<endl;

    if(alarmhour==0)
    {
        cout<<"Alarm is at midnight.";
    }

    return 0;
}
