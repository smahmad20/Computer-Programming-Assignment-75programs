// ============================================
// Program 71
// Topic: switch
// Difficulty: Difficult
//
// Question:
// Input marks (0 to 100). If valid, use switch (marks / 10)
// to print the grade: 9 and 10: A, 8: B, 7: C, 6: D, otherwise F.
// ============================================
#include <iostream>
using namespace std;
int main()
{
 int marks;

    cout<<"Enter marks (0-100): ";
    cin>>marks;

    if(marks>= 0 && marks<= 100)
    {
        switch (marks/10)
        {
            case 10:
            case 9:
                cout<<"Grade A"<<endl;
                break;

            case 8:
                cout<<"Grade B"<<endl;
                break;

            case 7:
                cout<<"Grade C"<<endl;
                break;

            case 6:
                cout<<"Grade D"<<endl;
                break;

            default:
                cout<<"Grade F"<<endl;
          }
    }
    else
    {
        cout<<"Invalid marks."<<endl;
    }
    return 0;
}
