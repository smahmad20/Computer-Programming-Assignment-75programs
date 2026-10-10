// ==========================================
// Program 36
// Topic: If-Else-if
// Difficulty: Moderate
//
// Question:
// Courier charges: up to 2 kg is 150, over 2 up to 6 kg is 400,
// over 6 up to 10 kg is 600, above 10 kg is 800. Print the charge.
// ==========================================

#include <iostream>
using namespace std;
int main()
{
double weight;
double charge;

cout<<"Enter parcel weight in kg: ";
    cin >> weight;

if (weight <= 0) {
        cout<<"Invalid weight entered!"<<endl;
}
else if(weight<=2) {
        charge = 150;
}
else if(weight<=6) {
        charge = 400;
}
else if(weight<= 10) {
        charge = 600;
}
else if(weight>10) {
        charge = 800;
}

  cout<<"Courier Charges: "<<charge<<"Rs"<<endl;
    return 0;
}