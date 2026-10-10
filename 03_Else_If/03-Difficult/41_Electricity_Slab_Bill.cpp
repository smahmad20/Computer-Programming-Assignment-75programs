// ==========================================
// Program 41
// Topic: If-Else-if
// Difficulty: Difficult
//
// Question:
// Electricity bill: input consumer ID and units (negative units print "Invalid units").
// Rates: first 100 units at 10, next 100 at 15, next 100 at 20, above 300 at 25. Add a TV fee of 35
// and GST of 17% of the energy charges. Print a labelled bill: ID, units, energy charges,
// TV fee, GST, total payable.
// ==========================================

#include <iostream>
using namespace std;
int main()
{
    int id;
	int units;
    double energy;
	double tvFee; 
	double gst;
	double total;

    cout<<"Enter consumer ID: "<<endl;
    cin>>id;
    cout<<"Enter units consumed: "<<endl;
    cin>>units;

    if (units< 0)
    {
        cout<<"Invalid units"<<endl;
    }
    else
    {
        if (units<= 100)
        {
            energy=units*10;
        }
        else if (units<=200)
        {
            energy=1000 + (units - 100) * 15;
        }
        else if (units<=300)
        {
            energy=2500 + (units - 200) * 20;
        }
        else
        {
            energy=4500 + (units - 300) * 25;
        }
        tvFee =35;
        gst = energy * 17 / 100;
        total = energy + tvFee + gst;

        cout<<"Consumer ID: "<<id<<endl;
        cout<<"Units: " <<units<<endl;
        cout<<"Energy Charges: "<<energy<<endl;
        cout<<"TV Fee: " <<tvFee<<endl;
        cout<<"GST: " <<gst<<endl;
        cout<<"Total Payable: "<<total<<endl;
    }

    return 0;
}
