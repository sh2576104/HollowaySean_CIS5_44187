/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on March 10, 2017, 8:30 PM
  Purpose:  Average Rainfall
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
    double a, b, c;
    
    //Input values
    cout << "Average rainfall for June in inches? = ";
    cin >> a;
    cout << "Average rainfall for July in inches? = ";
    cin >> b;
    cout << "Average rainfall for August in inches? = ";
    cin >> c;

    //Process by mapping inputs to outputs
    
    //Output values
    cout<<fixed<<setprecision(2);
    cout << "Average rainfall for June, July, and August is " << (a + b + c) / 3 <<" inches"<< ".\n";
    
    //Exit stage right!
    return 0;
}