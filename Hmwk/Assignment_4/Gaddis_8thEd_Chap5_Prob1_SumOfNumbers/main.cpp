/* 
 * File:   main.cpp
 * Author: Sean Holloway
 * Created on April 3, 2017, 5:00 PM
 * Purpose:  Sum of Numbers
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
    
    //Initialize variables
    
    //Input data
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout << "Sum = " << sum;
    //Exit stage right!
    return 0;
}
