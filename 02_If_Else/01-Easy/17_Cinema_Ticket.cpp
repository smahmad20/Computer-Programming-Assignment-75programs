// ==========================================
// Program 17
// Topic: If-Else
// Difficulty: Easy
//
// Question:
// Cinema: the late show is only for age 18 or more. Input age and print
// "Ticket allowed" or "Ticket not allowed."
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 int age;
 
 cout<<"Enter your Age:"<<endl;
 cin>>age;
 
 if(age>=18){
 	cout<<"Ticket allowed";
 }
else{
	cout<<"Ticket not allowed.";
}



    return 0;
}
