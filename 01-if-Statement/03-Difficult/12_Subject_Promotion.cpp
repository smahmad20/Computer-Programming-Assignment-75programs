// ==========================================
// Program 12
// Topic: If Statement
// Difficulty: Difficult
//
// Question:
// Input marks in 3 subjects. Use three separate ifs to count the subjects passed (40 or more).
// If the count is 3, print "Promoted to next semester."
// ==========================================

#include <iostream>
using namespace std;
int main()
{
    int marks1, marks2, marks3;
    int count = 0;

    cout << "Enter marks in three subjects: ";
    cin >> marks1 >> marks2 >> marks3;

    if(marks1>=40)
    {
        count=count +1;
    }

    if(marks2 >=40)
    {
        count= count +1;
    }

    if(marks3>=40)
    {
        count=count +1;
    }

    if(count ==3)
    {
        cout << "Promoted to next semester.";
    }


    return 0;
}
