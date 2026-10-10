// ==========================================
// Program 64
// Topic: Switch
// Difficulty: Easy
//
// Question:
// Input age. Print Infant (up to 1), Child (up to 12), Teenager (up to 19), Adult (otherwise).
// ==========================================

#include <iostream>
using namespace std;
int main()
{
int menu;
cout<<"1) Tea"<<endl;
cout<<"2) Coffee"<<endl;
cout<<"3) Milk"<<endl;
cout<<"4) Juice"<<endl;

cout<<"Please select from(1-4):"<<endl;
cin>>menu;

switch(menu){
	
    case 1:	
    cout<<"Tea: 80rs"<<endl;
	break;
	
	case 2:
	cout<<"Coffee: 150rs"<<endl;
	
	break;	
	case 3:
	cout<<"Milk: 100rs"<<endl;
	break;	

	case 4:
	cout<<"Juice: 120rs"<<endl;
	break;
	
	default:
		cout<<"Invalid Input!"<<endl;
}



return 0;


}
