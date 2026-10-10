// ==========================================
// Program 44
// Topic: If-Else-if
// Difficulty: Difficult
//
// Question:
// Exam result card: input marks of 3 subjects (each 0 to 100, otherwise print an error and stop).
// Calculate total and percentage. If any subject is below 40 the result is Fail. Otherwise division is Distinction (80+),
// First (60 to 79), Second (45 to 59), Third (below 45).
// Print a result card with marks, total, percentage, result, division.
// ==========================================

#include <iostream>
using namespace std;
int main()
{
    int s1, s2, s3, total;
    double percentage;
    bool valid;

    cout << "Enter marks of 3 subjects (0 to 100): ";
    cin >> s1 >> s2 >> s3;

    valid = true;
    if(s1 < 0 || s1 > 100)
    {
        valid = false;
    }
    if(s2 < 0 || s2 > 100)
    {
        valid = false;
    }
    if(s3 < 0 || s3 > 100)
    {
        valid = false;
    }

    if(valid == false)
    {
        cout << "Error: marks must be from 0 to 100" << endl;
    }
    else
    {
        total = s1 + s2 + s3;
        percentage = total * 100.0 / 300;

        cout<<"Marks: " <<s1<<" "<<s2<<" "<<s3<<endl;
        cout<<"Total: " << total << endl;
        cout<<"Percentage: " << percentage << endl;

        if(s1 < 40 || s2 < 40 || s3 < 40)
        {
            cout<<"Result: Fail"<<endl;
        }
        else if(percentage >= 80)
        {
            cout <<"Result: Pass, Distinction"<<endl;
        }
        else if(percentage >= 60)
        {
            cout <<"Result: Pass, First Division"<<endl;
        }
        else if(percentage >= 45)
        {
            cout<<"Result: Pass, Second Division"<<endl;
        }
        else
        {
            cout<<"Result: Pass, Third Division"<<endl;
        }
    }

    return 0;
}
