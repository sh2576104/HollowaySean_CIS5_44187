/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on March 10, 2017, 9:00 PM
  Purpose:  Male and Female Percentages
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries
//Global Constants
const float PERCENT=100.0f;//Percent conversion

//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
     double a, b, c;
     
    //Input values
     cout << "Total Number of Students = ";
     cin >> a;
     cout << "Total Number of Male Students = ";
     cin >> b;
     cout << "Total Number of Female Students = ";
     cin >> c;

    //Process by mapping inputs to outputs
    
    //Output values
    cout<<fixed<<setprecision(2);
    cout << "Percentage of Male Students = " << ((b / a) * 100) <<"%"<<".\n";
    cout << "Percentage of Female Students = " << ((c / a) * 100) <<"%"<<".\n";

    //Exit stage right!
    return 0;
}