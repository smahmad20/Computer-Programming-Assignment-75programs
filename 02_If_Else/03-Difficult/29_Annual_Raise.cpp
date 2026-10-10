// ==========================================
// Program 29
// Topic: If-Else
// Difficulty: Difficult
//
// Question:
// Annual raise: employee gets 15% if service years = 5 and rating = 4.
// Otherwise 5%. Input salary, years, rating and print the new salary.
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 int salary;
 int serviceyears;
 int rating;
 int newsalary;
 
    cout<<"Enter current salary: ";
    cin >> salary;
    cout<<"Enter years of service: ";
    cin>>serviceyears;
    cout<<"Enter performance rating: ";
    cin>>rating;
 
 if(serviceyears >= 5 && rating >= 4){
 	
 newsalary = salary+(salary*0.15);

 }
else{
 newsalary = salary+(salary*0.05);
}	
cout<<"New Salary: "<<newsalary<<endl;
    return 0;
}
