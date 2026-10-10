// ==========================================
// Program 30
// Topic: If-Else
// Difficulty: Difficult
//
// Question:
// Cash rounding: bill is a whole number of rupees. If the last digit is 5 or more,
// round up to the next multiple of 10. Otherwise round down. Print the rounded bill.
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 int bill;
 int lastdigit;
 int roundedbill;
 
 cout<<"Enter Bill Amount in Rs:"<<endl;
 cin>>bill;
 
 lastdigit= bill %10;
 
 if(lastdigit>=5){
 	roundedbill= bill +(10-lastdigit);

 }
else{
	roundedbill = bill - lastdigit;

}
 	cout<<"Rounded Bill: "<<roundedbill<<"Rs"<<endl;

    return 0;
}
