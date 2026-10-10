// ==========================================
// Program 35
// Topic: If-Else-if
// Difficulty: Easy
//
// Question:
// Input battery percentage. Print Full (80+), Good (50 to 79),
// Low (20 to 49), Critical (below 20).
// ==========================================

#include <iostream>
using namespace std;
int main()
{
double battery;

cout<<"Enter your Battery Percentage:"<<endl;
cin>>battery;

if(battery>=80){
	cout<<"Full"<<endl;
}
else if(battery>=50 && battery<=79){
	cout<<"Good"<<endl;
}
else if(battery>=20 && battery<=49){
	cout<<"Low"<<endl;
}

else{
	cout<<"Critical"<<endl;
}
    return 0;
}
