/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on April 3, 2017, 9:10 PM
  Purpose:  Burning Calories
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
    float caloriesBurned;
    float caloriesPerMinute = 3.6f;
    
    //Input values
    for (int i = 10; i <= 30; i+=5)
    {
        caloriesBurned = i * caloriesPerMinute;
        cout << "In " << i << " minutes you burned " << caloriesBurned << " calories.\n";
    }
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}