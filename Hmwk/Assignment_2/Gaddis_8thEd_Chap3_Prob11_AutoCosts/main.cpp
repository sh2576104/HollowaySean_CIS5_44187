/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on March 10, 2017, 11:10 PM
  Purpose:  Automobile Costs
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
    int a, b, c, d, e, f; 
    //Input values
    cout << "Monthly Loan Payment $";
    cin >> a;
    cout << "Monthly Insurance Payment $";
    cin >> b;
    cout << "Monthly Gas $";
    cin >> c;
    cout << "Monthly Oil $";
    cin >> d;
    cout << "Monthly Tires $";
    cin >> e;
    cout << "Monthly Maintenance $";
    cin >> f;

    //Process by mapping inputs to outputs
    
    //Output values
    cout<<fixed<<setprecision(2);
    cout << "Total Monthly Automobile Costs $" << (a + b + c + d + e + f)<< ".\n";

    //Exit stage right!
    return 0;
}