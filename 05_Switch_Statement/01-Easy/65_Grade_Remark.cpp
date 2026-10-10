// ==========================================
// Program 65
// Topic: Switch
// Difficulty: Easy
//
// Question:
// Input a grade letter (A, B, C, D, F, upper or lower case) and print a remark.
// ==========================================

#include <iostream>
using namespace std;
int main()
{
char grade;

cout<<"Enter yout grade(A-F):"<<endl;
cin>>grade;

switch(grade){
	
    case 'A':
	case 'a':	
    cout<<"Exceptional"<<endl;
	break;
	
	case 'B':
	case 'b':	
	cout<<"Very Good"<<endl;
	
	break;	
	case 'C':
	case 'c':	
	cout<<"Good"<<endl;
	break;	

	case 'D':
	case 'd':	
	cout<<"Need Improvement"<<endl;
	break;
	case 'E':
	case 'e':
	cout<<"Poor<<endl;
	break;
	
	case 'F':
	case 'f':	
	cout<<"Need Improvement"<<endl;
	break;
	
	
	default:
		cout<<"Invalid Input!"<<endl;
}



return 0;


}
