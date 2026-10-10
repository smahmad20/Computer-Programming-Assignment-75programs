// ============================================
// Program 75
// Topic: switch
// Difficulty: Difficult
//
// Question:
// Days in a month: input month (1 to 12) and year (above 0), otherwise print an error. Use switch to print the month name and number of days.
// For February, check the leap year (divisible by 4 and not 100, or divisible by 400) and print 29 or 28. Print whether the year is a leap year on a separate line.
// ============================================

#include <iostream>
using namespace std;
int main()
{
  int month;
  int year;
  int days;
  int leap;

    cout<<"Enter month (1-12): ";
    cin>>month;

    cout<<"Enter year: ";
    cin>>year;

    if (month<1 ||month>12 || year<=0)
    {
        cout << "Invalid month or year.";
       
    }

    if (year % 400 == 0 ||
        (year % 4 == 0 && year % 100 != 0))
        leap = 1;
    else
        leap = 0;

    switch(month)
    {
        case 1:
            cout << "January";
            days = 31;
            break;

        case 2:
            cout << "February";
            if (leap == 1)
                days = 29;
            else
                days = 28;
            break;

        case 3:
            cout << "March";
            days = 31;
            break;

        case 4:
            cout << "April";
            days = 30;
            break;

        case 5:
            cout << "May";
            days = 31;
            break;

        case 6:
            cout << "June";
            days = 30;
            break;

        case 7:
            cout << "July";
            days = 31;
            break;

        case 8:
            cout << "August";
            days = 31;
            break;

        case 9:
            cout << "September";
            days = 30;
            break;

        case 10:
            cout << "October";
            days = 31;
            break;

        case 11:
            cout << "November";
            days = 30;
            break;

        case 12:
            cout << "December";
            days = 31;
            break;
    }

    cout<<"\nNumber of Days: "<<days;

    if(leap ==1)
        cout<<"\nLeap Year";
    else
        cout<<"\nNot a Leap Year";
 return 0;
}
