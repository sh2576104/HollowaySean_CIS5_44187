/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on March 10, 2017, 11:00 PM
  Purpose:  Math Tutor
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
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
    int a, b, c;
    string enter;
    
    //Input values
    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    
    //Process by mapping inputs to outputs
    
    //Output values
    cout << "The Sum of the Numbers is ";
    cout << (a + b) << endl;

    //Exit stage right!
    return 0;
}
