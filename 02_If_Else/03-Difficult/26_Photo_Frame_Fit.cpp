// ==========================================
// Program 26
// Topic: If-Else
// Difficulty: Difficult
//
// Question:
// Photo frame: frame is W × H, photo is w × h. The photo fits if both sides fit directly
// or after turning it sideways. Print "Fits" or "Does not fit."
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 double W,H,w,h;
 
 
 cout<<"Enter frame width (W) and height (H):"<<endl;
 cin>>W>>H;
cout<<"Enter  width (W) and height (H):"<<endl;
 cin>>w>>h; 
 if(w <= W && h || w <= H && h <= W){
 	cout<<"Fits"<<endl;
 }
else{
	cout<<"Does not fit"<<endl;
}
 	
    return 0;
}
