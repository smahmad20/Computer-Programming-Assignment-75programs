// ==========================================
// Program 04
// Topic: If Statement
// Difficulty: Easy
//
// Question:
// 	Input attendance percentage. If below 75, print "Short attendance warning."	
// ==========================================

#include <iostream>
using namespace std;

int main()
{
 int attendance;

    cout<<"Enter attendance percentage: "<<endl;
    cin>>attendance;

    if(attendance < 75)
    {
        cout<<"Short attendance warning."<<endl;
    }




    return 0;
}
