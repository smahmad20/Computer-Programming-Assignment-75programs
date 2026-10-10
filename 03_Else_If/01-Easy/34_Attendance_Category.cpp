// ==========================================
// Program 34
// Topic: If-Else-if
// Difficulty: Easy
//
// Question:
// Input attendance percentage. 90 and above: Excellent, 75 to 89: Satisfactory
// 60 to 74: Warning, below 60: Detained.
// ==========================================

#include <iostream>
using namespace std;
int main()
{
int attendence;

cout<<"Enter your Attendence Percentage:"<<endl;
cin>>attendence;

if(attendence>=90){
	cout<<"Excellent"<<endl;
}
else if(attendence>=75 && attendence<=89){
	cout<<"Satisfactory"<<endl;
}
else if(attendence>=60 && attendence<=74){
	cout<<"Warning"<<endl;
}
else if(attendence<60){
	cout<<"Detained"<<endl;
}

else{
	cout<<"Invalid Output"<<endl;
}
    return 0;
}
