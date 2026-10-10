// ==========================================
// Program 45
// Topic: If-Else-if
// Difficulty: Difficult
//
// Question:
// Ride fare multiplier by hour (0 to 23): hours 7 to 9 and 17 to 19: ×1.5, hours 22 to 23 and 0 to 5: ×2,
// all other hours: ×1. Base fare is 400. Print the fare.
// ==========================================
#include <iostream>
using namespace std;
int main()
{
    int hour;
    double fare;

    cout << "Enter hour (0 to 23): "<<endl;
    cin >> hour;

    if(hour<0 || hour>23)
    {
        cout<<"Invalid hour"<<endl;
    }
    else if((hour>=7 && hour<=9) || (hour>=17 && hour<=19))
    {
        fare=400*1.5;
        cout<<"Peak fare: "<<fare<<endl;
    }
    else if(hour >= 22 || hour <= 5)
    {
        fare=400*2;
        cout<<"Night fare: "<<fare<<endl;
    }
    else
    {
        fare=400;
        cout<<"Normal fare: "<<fare<<endl;
    }
    return 0;
}
