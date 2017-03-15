/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on February 28, 2017, 5:34 PM
  Purpose:  Total Purchase
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
#include <iomanip>
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int pur1 = 15.95;  //Purchase 1
    int pur2 = 24.95;   //Purchase 2
    int pur3 = 6.95;   //Purchase 3
    int pur4 = 12.95;   //Purchase 4
    int pur5 = 3.95;   //Purchase 5
    
    //Input values
    int cost = 15.95 + 24.95 + 6.95 + 12.95 + 3.95;
    
    //Process by mapping inputs to outputs
    
    //Output values
   cout<<"Purchase 1 = $"<<15.95<<endl;
   cout<<"Purchase 2 = $"<<24.95<<endl;
   cout<<"Purchase 3 = $"<<6.95<<endl;
   cout<<"Purchase 4 = $"<<12.95<<endl;
   cout<<"Purchase 5 = $"<<3.95<<endl;
   cout<<"tax = " <<7<<"%"<<endl;
   cout<<"Total Paid = $"<<64.75*.07+64.75<<endl;
    //Exit stage right!
    return 0;
}