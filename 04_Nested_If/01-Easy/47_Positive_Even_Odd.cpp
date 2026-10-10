// ============================================
// Program 47
// Topic: Nested if
// Difficulty: easy
//
// Question:
// Input a number. If positive, print whether it is even or odd. Otherwise print "Not a positive number.
// ============================================
#include<iostream>
using namespace std;

int main()
{
int num;

    cout<<"Enter a number: "<<endl;
    cin>>num;

    if(num>0)
    {
        if(num%2==0)
        {
        cout<<"The number is even"<<endl;
        }
        else
        {
        cout<<"The number is odd"<<endl;
        }
    }
    else
    {
        cout<<"Not a positive number."<<endl;
    }

    return 0;
}    


