// ==========================================
// Program 39
// Topic: If-Else-if
// Difficulty: Moderate
//
// Question:
// Parking fee by hours parked: up to 1 hour is free, 2 to 4 hours: 50 per hour, 
// 5 to 8 hours: 40 per hour,more than 8 hours: flat 500 day pass. Print the fee
// ==========================================

#include <iostream>
using namespace std;

int main() {
    int hours;

    cout<<"Enter parking duration in hours: "<<endl;
    cin>>hours;

    if (hours< 0) {
        cout << "Invalid parking duration!" << endl;
        return 0;
    }
    int fee= 0;

    if (hours<= 1) {
        fee= 0;
    } else if (hours<= 4) {
        fee= hours* 50;
    } else if (hours<= 8) {
        fee= hours* 40;
    } else {
        fee= 500;
    }

    cout<<"Parking Fee: Rs. " <<fee<<endl;

    return 0;
}
