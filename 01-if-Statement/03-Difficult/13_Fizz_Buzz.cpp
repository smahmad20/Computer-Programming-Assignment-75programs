// ==========================================
// Program 13
// Topic: If Statement
// Difficulty: Difficult
//
// Question:
// Number game: input a number. If divisible by 3 print "Fizz".
// If divisible by 5 print "Buzz". If both, both words appear.
// ==========================================

#include <iostream>
using namespace std;
int main()
{
     int number;

    cout<<"Enter a number: "<<endl;
    cin>>number;

    if(number%3==0)
    {
        cout<<"Fizz "<<endl;
    }

    if(number%5==0)
    {
        cout<<"Buzz"<<endl;
    }

    return 0;
}
