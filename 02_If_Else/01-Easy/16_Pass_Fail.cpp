// ==========================================
// Program 16
// Topic: If-Else
// Difficulty: Easy
//
// Question:
// Input marks out of 100. Print "Pass" if 40 or more, otherwise "Fail."
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 int marks;
 
 cout<<"Enter your Marks out of 100:"<<endl;
 cin>>marks;
 
 if(marks>=40){
 	cout<<"PASS";
 }
else{
	cout<<"Fail";
}



    return 0;
}
