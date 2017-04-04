/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on April 3, 2017, 9:20 PM
  Purpose:  Membership Fees Increase
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
    const float INCREASE = .04;
    const int YEARS = 6;
    float membership = 2500;
    
    //Input values
    for(int i = 1; i <= YEARS; i++)
    {
        membership = membership + (membership * INCREASE);
        cout << "Year " << i << " fees are: $" << membership << endl;
    }
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}