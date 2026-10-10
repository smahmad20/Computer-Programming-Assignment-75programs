// ==========================================
// Program 27
// Topic: If-Else
// Difficulty: Difficult
//
// Question:
// Shop is open from 9:00 AM to 5:30 PM (both times included).
// Input hour and minute and print "Open" or "Closed."
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 int hours;
 int minutes;
 
 cout<<"Enter hours in 24Hours format: "<<endl;
 cin>>hours;
cout<<"Enter  minutes:"<<endl;
 cin>>minutes; 
 if(hours > 9 && hours < 17||hours == 9 && minutes >= 0||hours == 17 && minutes <= 30){
 	cout<<"Open"<<endl;
 }
else{
	cout<<"Closed"<<endl;
}
 	
    return 0;
}
