// ==========================================
// Program 11
// Topic: If Statement
// Difficulty: Difficult
//
// Question:
// 	Speeding fine: limit is 80. Input speed. If above 80, fine = (speed - 80) × 100.
//  If speed is also above 120, add a further 2000. Print the fine.
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 int speed; 
 int fine = 0;

    cout<<"Enter speed: "<<endl;
    cin>>speed;

    if(speed>80)
    {
    fine =(speed-80)*100;
    }

    if(speed>120)
    {
        fine=fine+2000;
    }

    cout<<"Total fine = Rs. " <<fine<<endl;




    return 0;
}
