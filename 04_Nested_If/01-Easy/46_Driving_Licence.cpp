// ============================================
// Program 46
// Topic: Nested if
// Difficulty: Easy
//
// Question:
// Driving licence: if age > 18, check the written test (1 = passed). Print "Licence issued" or "Pass the written test first.
// If under 18, print "Too young.
// ============================================
#include<iostream>
using namespace std;
int main()
{
    int age;
	int test;

    cout<<"Enter your age: "<<endl;
    cin>>age;

    if (age >= 18)
    {
        cout<<"Did you pass the written test? (1 = Yes, 0 = No): "<<endl;
        cin>>test;

        if(test == 1)
        {
            cout<<"Licence issued"<<endl;
        }
        else
        {
            cout<<"Pass the written test first."<<endl;
        }
    }
    else
    {
        cout<<"Too young"<<endl;
    }

    return 0;
}


