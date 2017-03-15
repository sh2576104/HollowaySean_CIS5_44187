/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on March 10, 2017, 6:30 PM
  Purpose:  Stadium Seating
 */

//System Libraries
#include <iostream>   //Input - Output Library
#include <iomanip>    //Format Library
#include <cmath>      //Math Library
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
    double a, b, c, A, B, C;
    
    //Input values
    cout << "How many Class A seats? ";
    cin >> a;
    cout << "How many Class B Seats? ";
    cin >> b;
    cout << "How many Class C Seats? ";
    cin >> c;
    A = a * 15;
    B = b * 12;
    C = c * 9;
    
    //Process by mapping inputs to outputs
      
    //Output values
    cout<<setprecision(2)<<fixed<<showpoint;
    cout << "Total price of Class A seats = $" << A << ".\n";
    cout << "Total price of Class B seats = $" << B << ".\n";
    cout << "Total price of Class C seats = $" << C << ".\n";
    cout << "Total price for all Tickets = $" << A + B + C << ".\n";

    //Exit stage right!
    return 0;
}