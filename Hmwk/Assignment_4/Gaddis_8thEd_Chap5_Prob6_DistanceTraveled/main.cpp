/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on April 3, 2017, 9:30 PM
  Purpose:  Distance Traveled
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
    float distance;
    float speed;
    int time;
    
    //Input values
    cout << "What is the speed of the vehicle? ";
    cin >> speed;
    
    while (speed <= 0)
    {
        cout << "Speed must me greater than zero. Please enter speed again! ";
        cin >> speed;
    }
    
    cout << "How many hours did it travel? ";
    cin >> time;
    
    while (time <1)
    {
        cout << "Time must be greater than zero. Please enter speed again! ";
        cin >> time;
    }
    
    cout << "\nHour\tDistance Traveled\n";
    cout << "=========================\n";
    
    for (int i = 1; i <= time; i++)
    {
        distance = speed * i;
        cout << i << "\t\t" << distance << endl;
    }
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}