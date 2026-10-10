// ==========================================
// Program 22
// Topic: If-Else
// Difficulty: Moderate
//
// Question:
// Electricity bill: first 200 units cost 18 each. If units exceed 200,
// the remaining units cost 25 each. Print the bill.
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 int bill;
 int unit;

 cout<<"Enter electricity units consumed:"<<endl;
 cin>>unit;
 
 if(unit<=200){
 	bill = unit*18;

 }
 else{
 int first200=200*18;
 int extraunit= unit -200;
 int extracost = extraunit *25;
 
 bill = first200 + extraunit*25;

}
 	cout<<"Total Bill:"<<bill<<endl;

    return 0;
}
