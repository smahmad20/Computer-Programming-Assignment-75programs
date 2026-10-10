// ==========================================
// Program 61
// Topic: Switch
// Difficulty: Easy
//
// Question:
// 	Input a number 1 to 7 and print the day name (1 = Monday). Otherwise print "Invalid day."
// ==========================================

#include <iostream>
using namespace std;
int main()
{
int num;

cout<<"Enter a Number between (1-7):"<<endl;
cin>>num;

switch(num){
	case 1:
	cout<<"Monday"<<endl;
		break;
	case 2:
	cout<<"Tuesday"<<endl;
	
	break;	
    case 3:	
    cout<<"Wednesday"<<endl;
	break;
	
	case 4:
	cout<<"Thursday"<<endl;
	
	break;	
	case 5:
	cout<<"Friday"<<endl;
	
	break;	
    case 6:	
    cout<<"Saturday"<<endl;
    break;
	case 7:
	cout<<"Sunday"<<endl;
	break;
	
	default:
		cout<<"Invalid Number!"<<endl;
}



return 0;


}


