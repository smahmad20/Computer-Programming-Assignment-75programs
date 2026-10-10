// ==========================================
// Program 43
// Topic: If-Else-if
// Difficulty: Difficult
//
// Question:
// Scholarship: percentage = 90 and attendance = 85: 100%, percentage = 80 and attendance = 80:
// 50%, percentage = 70: 25%, otherwise none. Input both values.
// ==========================================

#include <iostream>
using namespace std;
int main()
{
    double percentage, attendance;
    int scholarship;

    cout<<"Enter percentage: "<<endl;
    cin>>percentage;
    cout<<"Enter attendance: "<<endl;
    cin>>attendance;

    if(percentage>= 90 && attendance>= 85)
    {
        scholarship = 100;
    }
    else if(percentage>= 80 && attendance>= 80)
    {
        scholarship= 50;
    }
    else if(percentage>= 70)
    {
        scholarship=25;
    }
    else
    {
        scholarship = 0;
    }

    cout<<"Scholarship: "<<scholarship<<"%"<<endl;
    return 0;
}
