// ==========================================
// Program 37
// Topic: If-Else-if
// Difficulty: Moderate
//
// Question:
// 	Input weight (kg) and height (m). Calculate BMI = weight / (height × height).
// Print Underweight (below 18.5), Normal (up to 24.9), Overweight (up to 29.9), Obese (30+)
// ==========================================

#include <iostream>
using namespace std;
int main()
{
double weight;
double height;
double bmi;

cout<<"Enter your weight in kg:"<<endl;
cin>>weight;

cout<<"Enter your Height in meters:"<<endl;
cin>>height;

if(height <= 0 || weight <= 0){
	cout<<"Invalid input"<<endl;
}
bmi = weight/(height*height);
cout<<"Calculated BMI: "<<bmi<< endl;

if(bmi<18.5){
	cout<<"Underweight"<<endl;
}
else if(bmi<=24.9){
	cout<<"Normal"<<endl;
}
else if(bmi<=29.9){
	cout<<"Overweight"<<endl;
}

else{
	cout<<"Obese"<<endl;
}
    return 0;
}
