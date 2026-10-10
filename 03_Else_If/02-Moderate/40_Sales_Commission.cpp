// ==========================================
// Program 40
// Topic: If-Else-if
// Difficulty: Moderate
//
// Question:
// Sales commission on monthly sales: below 20000: 0%, 20000 to 49999: 3%
// 50000 to 99999: 5%, 100000+: 8%. Print the commission.
// ==========================================

#include <iostream>
using namespace std;
int main()
{
double sales;
double commission;

cout<<"Enter your Total Monthly Sales:"<<endl;
cin>>sales;

if(sales<20000){
commission = sales*0.0;
}
else if(sales<=49999){
commission =sales*0.03;
}
else if(sales<=99999){
	commission =sales*0.05;
}

else{
commission= sales*0.08;
}
  cout<<"Commission earned: "<<commission<<endl;
    return 0;
}
