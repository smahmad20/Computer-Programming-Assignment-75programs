// ==========================================
// Program 18
// Topic: If-Else
// Difficulty: Easy
//
// Question:
// 	Input water temperature. Print "Water is boiling" if 100 or more,
// else "Water is not boiling."
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 int temp;
 
 cout<<"Enter Water Temperature:"<<endl;
 cin>>temp;
 
 if(temp>=100){
 	cout<<"Water is boiling";
 }
else{
	cout<<"Water is not boiling.";
}



    return 0;
}
