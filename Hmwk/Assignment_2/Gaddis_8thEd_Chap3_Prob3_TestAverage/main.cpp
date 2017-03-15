/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on March 10, 2017, 8:00 PM
  Purpose:  Test Average
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
    double a, b, c ,d, e;
    
    //Input values
    cout << "Test 1 score = ";
    cin >> a;
    cout << "Test 2 score = ";
    cin >> b;
    cout << "Test 3 score = ";
    cin >> c;
    cout << "Test 4 score = ";
    cin >> d;
    cout << "Test 5 score = ";
    cin >> e;
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<fixed<<setprecision(2);
    cout << "Average Test Scores = " << (a + b + c + d + e) / 5 << ".\n";

    //Exit stage right!
    return 0;
}