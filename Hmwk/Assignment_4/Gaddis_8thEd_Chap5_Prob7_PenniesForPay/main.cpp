/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on April 3, 2017, 9:45 PM
  Purpose:  Pennies for Pay
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int numDays = 1;
    double money = 1.0; // 1 penny
    double total = 0.0;
    double dayPay = 0.0;
    
    //Input values
    cout << "Enter number of Days\n";
    cin >> numDays;
    
    while (numDays < 1)
    {
        cout << "Please enter valid of days\n";
        cin >> numDays;
    }
    
    for (int i = 1; i <= numDays; i++)
    {
        dayPay = money / 100;
        cout << "Day " << i << " You earned $" << dayPay << "\n";
        total += dayPay;
        money *= 2;
    }
    cout << "Total earnings are $" << total << endl;
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}