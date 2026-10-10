// ==========================================
// Program 63
// Topic: Switch
// Difficulty: Easy
//
// Question:
// 	Input a traffic light colour as a char: 'R', 'Y' or 'G'. Print Stop, Get ready or Go.
// ==========================================

#include <iostream>
using namespace std;
int main()
{
char col;

cout<<"Enter a Number between (1-7):"<<endl;
cin>>col;

switch(col){
	
    case 'R':	
    cout<<"Stop"<<endl;
	break;
	
	case 'Y':
	cout<<"Get Ready"<<endl;
	
	break;	
	case 'G':
	cout<<"Go"<<endl;
	
	break;	

	default:
		cout<<"Invalid Input!"<<endl;
}



return 0;


}
