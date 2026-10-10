// ==========================================
// Program 24
// Topic: If-Else
// Difficulty: Moderate
//
// Question:
// 	Input a number. Print "Lucky number" if it is divisible by both 3 and 7,
// otherwise "Ordinary number."
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 int num1;

 cout<<"Input a Number:"<<endl;
 cin>>num1;
 
 if(num1%3==0 && num1%7==0){
 	cout<<"Lucky Number";
 }
else{
cout<<"Ordinary Number"<<endl;

}
    return 0;
}
