/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on March 10, 2017, 11:27 PM
  Purpose:  Template to be used in all programming
            projects!
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
    
    //Input values
    cout << "How Manu Cookies did you eat? ";
    cin >> a;

    //Process by mapping inputs to outputs
    
    //Output values
    cout << "The amount of calories consumed: " << (a * 100) << ".\n";

    //Exit stage right!
    return 0;
}