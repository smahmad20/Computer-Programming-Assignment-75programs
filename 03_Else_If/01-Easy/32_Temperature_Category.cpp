// ==========================================
// Program 32
// Topic: If-Else-if
// Difficulty: Easy
//
// Question:
// Input temperature. Print Freezing (below 0), Cold (0 to 15),
// Pleasant (16 to 30), Hot (above 30).
// ==========================================

#include <iostream>
using namespace std;
int main()
{
double temp;

cout<<"Enter Temperature:"<<endl;
cin>>temp;

if(temp<0){
	cout<<"Freezing Point"<<endl;
}
else if(temp>=0 && temp<=15){
	cout<<"Cold"<<endl;
}
else if(temp>=16 && temp<=30){
	cout<<"Pleasant"<<endl;
}

else{
	cout<<"Hot"<<endl;
}
    return 0;
}
