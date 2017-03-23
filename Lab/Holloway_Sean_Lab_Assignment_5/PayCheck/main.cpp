/* 
 * File:   main.cpp
 * Author: Sean Holloway
 * Created on March 22, 2017, 6:30 PM
 * Purpose:  Paycheck
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    double a, b,c;
    
    //Input data
    cout<<"The program produces money made per paycheck"<<endl;
    cout<<"Enter dollar amount per hour = ";
    cin>>a;
    cout<<"Hours worked without double time = ";
    cin>>b;
    cout<<"Double Time Hours = ";   
    cin>>c;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
     cout << "Paycheck = " << (a*b)+(c*20) <<".\n";
    
    //Exit stage right!
    return 0;
}