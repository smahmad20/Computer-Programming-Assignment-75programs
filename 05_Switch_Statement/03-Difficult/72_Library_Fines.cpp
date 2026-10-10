// ============================================
// Program 72
// Topic: switch
// Difficulty: Difficult
//
// Question:
// Library fines by member type: 'S' student, 'T' teacher, 'G' guest. Input type and days late. Student:
// free for 7 days then 5 per day. Teacher: free for 14 days then 3 per day. Guest: 10 per day from day 1.
// ============================================
#include <iostream>
#include <iostream>
using namespace std;
int main()
{
    char type;
    int days; 
	int fine = 0;

    cout<<"Enter member type (S/T/G): "<<endl;
    cin>>type;

    cout << "Enter days late: "<<endl;
    cin >> days;

    if(days < 0)
    {
        cout<<"Invalid number of days."<<endl;
    }
    else
    {
        switch (type)
        {
            case 'S':
            case 's':
                if (days >7)
                    fine = (days-7)*5;
                break;

            case 'T':
            case 't':
                if (days >14)
                    fine =(days-14)*3;
                break;

            case 'G':
            case 'g':
                fine=days*10;
                break;

            default:
                cout<<"Invalid member type."<<endl;
                return 0;
        }

        cout<<"Library Fine: Rs. "<<fine<<endl;
    }

    return 0;
}
