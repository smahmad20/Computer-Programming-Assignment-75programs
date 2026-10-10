// ==========================================
// Program 02
// Topic: If Statement
// Difficulty: Easy
//
// Question:
// 	Input today's temperature. If above 40, print "Heat alert: stay indoors."
// ==========================================

#include <iostream>
using namespace std;

int main()
{
    double temperature;

    cout<< "Enter today's temperature: "<<endl;
    cin>>temperature;

    if(temperature>40)
    {
        cout<<"Heat alert: stay indoors."<<endl;
    }

    return 0;
}
