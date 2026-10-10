// ==========================================
// Program 33
// Topic: If-Else-if
// Difficulty: Easy
//
// Question:
// 	Input a number. Print "Positive", "Negative" or "Zero."
// ==========================================

#include <iostream>
using namespace std;
int main()
{
int num;

cout<<"Enter A Numnber:"<<endl;
cin>>num;

if(num<0){
	cout<<"Negative"<<endl;
}
else if(num>0){
	cout<<"Positve"<<endl;
}
else if(num==0){
	cout<<"Zero"<<endl;
}

else{
	cout<<"Invalid Input"<<endl;
}
    return 0;
}
