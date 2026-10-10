// ==========================================
// Program 28
// Topic: If-Else
// Difficulty: Difficult
//
// Question:
// Input three sides of a triangle in any order. Print "Right-angled"
// or "Not right-angled" using the Pythagoras rule.
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 int a;
 int b;
 int c;
 
 cout<<"Enter 3 sides of a Triangle:"<<endl;
 cin>>a>>b>>c;
 
 if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==next a*a){
 	
 	cout<<"It is a Right Angle Triangle"<<endl;

 }
else{
	cout<<"It is not a Right Angle Triangle"<<endl;

}
 	

    return 0;
}
