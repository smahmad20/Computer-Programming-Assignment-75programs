// ==========================================
// Program 25
// Topic: If-Else
// Difficulty: Moderate
//
// Question:
// Mobile package gives 1500 MB. Input MB used. If within the package,
// print remaining MB. Otherwise print extra MB used and the charge at Rs 2 per MB.
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 int mbused;
 int packagelimit=1500;
 int remainingmb;
 int extramb;
 int charge;
 cout<<"Enter MB used:"<<endl;
 cin>>mbused;
 
 if(mbused <= packagelimit){
 	remainingmb = packagelimit - mbused;
 	cout<<"Remaining MB:"<<remainingmb<<endl;

 }
else{
	extramb= mbused -packagelimit;
	charge= extramb*2;
    cout<<"Extra MB used:"<<extramb<<endl;
    cout<<"Charge:"<<charge<<"Rs"<<endl;
}
 	

    return 0;
}
