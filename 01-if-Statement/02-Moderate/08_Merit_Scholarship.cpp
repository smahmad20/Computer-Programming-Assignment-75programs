// ==========================================
// Program 08
// Topic: If Statement
// Difficulty: Moderate
//
// Question:
// Input marks percentage and attendance. If marks = 85 and attendance = 80,
// print "Eligible for merit scholarship."
// ==========================================

#include <iostream>
using namespace std;
int main()
{
    int marks, attendance;

    cout<<"Enter marks percentage: "<<endl;
    cin>>marks;

    cout<<"Enter attendance percentage: "<<endl;
    cin>>attendance;

    if(marks >= 85 && attendance >= 80)
    {
    cout << "Eligible for merit scholarship."<<endl;
    }

    return 0;
}
