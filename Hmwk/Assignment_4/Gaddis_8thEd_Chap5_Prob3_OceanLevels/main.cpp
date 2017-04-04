/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on April 3, 2017, 9:00 PM
  Purpose:  Ocean Levels
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
    double level = 0;
    int years = 25;
    //Input values
    for (int i = 1; i <= years; i++)
    {
        level += 1.5;
        cout << "Year " << i << ": " << level << "mm\n";
    }
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}