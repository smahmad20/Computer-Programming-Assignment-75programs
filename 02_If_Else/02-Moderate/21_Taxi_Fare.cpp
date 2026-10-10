// ==========================================
// Program 21
// Topic: If-Else
// Difficulty: Moderate
//
// Question:
// Taxi fare: up to 5 km costs a flat 300. Beyond 5 km, add 60 per extra km.
// Input distance and print the fare.
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 int fare;
 int distance;

 cout<<"Enter Distance Travelled(km):"<<endl;
 cin>>distance;
 
 if(distance<=5){
 	fare= 300;

 }
else{
fare = 300+(distance-5)*60;

}
 	cout<<"Total Fare:"<<fare<<endl;

    return 0;
}
