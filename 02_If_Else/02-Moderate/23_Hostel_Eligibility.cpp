// ==========================================
// Program 23
// Topic: If-Else
// Difficulty: Moderate
//
// Question:
// Hostel eligibility: student needs CGPA = 3.0 and home distance more than 50 km.
// Print "Eligible" or "Not eligible."
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 double gpa;
 int distance;

 cout<<"Enter your GPA:"<<endl;
 cin>>gpa;
 cout<<"Enter Distance:"<<endl;
 cin>>distance;
 
 if(distance>50 && gpa>=3.0){
 	cout<<"Eligible"<<endl;
 }
 
else{
  cout<<"Not Eligible"<<endl;
}
 	
    return 0;
}
