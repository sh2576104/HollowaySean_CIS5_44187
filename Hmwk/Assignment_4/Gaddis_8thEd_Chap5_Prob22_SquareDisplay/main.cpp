/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on April 3, 2017, 10:45 PM
  Purpose:  Square Display
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
    int sideSize = 0;
    
    //Input values
    cout << "Enter number from 1 to 15 " << endl;
    cin >> sideSize;
    
    for (int r = 1; r <= sideSize; r++)
    {
        for (int c = 1 ; c <= sideSize; c++)
        {
            cout << "X";
        }
        cout << endl;
    }
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}