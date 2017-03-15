/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on March 10, 2017, 6:00 PM
  Purpose:  Miles Per Gallon
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
    int gallons, mileage, mpg;
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "Number of gallons of gas the car can hold? ";
    cin >> gallons; 
    cout << "Estimated Miles Per Gallon? ";
    cin >> mileage;
    mpg = gallons * mileage;
    cout << "Miles on a full tank of gas " << mpg << ".\n";
    

    //Exit stage right!
    return 0;
}