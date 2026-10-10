// ==========================================
// Program 01
// Topic: If Statement
// Difficulty: Easy
//
// Question:
// 	Input a salesperson's monthly sales. If sales are above 50000, print "You earned a bonus."
// ==========================================

#include <iostream>
using namespace std;

int main()
{
    int sale;

    cout<<"Enter monthly sales: "<<endl;
    cin>>sale;

    if(sale>50000)
    {
    cout<<"You earned a bonus."<<endl;
    }

    return 0;
}
