// ==========================================
// Program 05
// Topic: If Statement
// Difficulty: Easy
//
// Question:
// 	Input a shopping bill. If it is 2000 or more, print "Delivery is free."
// ==========================================

#include <iostream>
using namespace std;

int main()
{
    int bill;

    cout<<"Enter shopping bill: "<<endl;
    cin>>bill;

    if (bill>=2000)
    {
    cout << "Delivery is free."<<endl;
    }



    return 0;
}
