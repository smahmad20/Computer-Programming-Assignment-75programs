// ==========================================
// Program 31
// Topic: If-Else-if
// Difficulty: Easy
//
// Question:
// Input age. Print Infant (up to 1), Child (up to 12), Teenager (up to 19), Adult (otherwise).
// ==========================================

#include <iostream>
using namespace std;
int main()
{
double age;

cout<<"Enter your age:"<<endl;
cin>>age;

if(age<=1){
	cout<<"Infant"<<endl;
}
else if(age<=12){
	cout<<"Child"<<endl;
}
else if(age<=19){
	cout<<"Teenager"<<endl;
}

else{
	cout<<"Adult"<<endl;
}
    return 0;
}
