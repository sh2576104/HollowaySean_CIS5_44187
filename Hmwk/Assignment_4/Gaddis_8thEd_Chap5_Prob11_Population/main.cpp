/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on April 3, 2017, 10:10 PM
  Purpose:  Population
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
    float startPopulation = 0.0f;
    int numDays = 0;
    float avgIncrease = 0.0f;
    float dailyPopulation = 0.0f;
    //Input values
    cout << "Please enter starting number of organisms: ";
    cin >> startPopulation;
    
    while (startPopulation < 2)
    {
        cout << "The starting population cannot be less than 2. Please re-enter: ";
        cin >> startPopulation;
    }
    
    cout << "Please enter the number of days the population multiplies: ";
    cin >> numDays;
    
    while (numDays < 1)
    {
        cout << "The starting population cannot be less than 1. Please re-enter: ";
        cin >> numDays;
    }
    
    cout << "Please enter average daily increase in population (in percentages)";
    cin >> avgIncrease;
    
    while (avgIncrease < 0)
    {
        cout << "The average in population cannot be negative. Please re-enter: ";
        cin >> avgIncrease;
    }
    
    for (int i = 1; i <= numDays; i++)
    {
        //calculate increase
        dailyPopulation = ((avgIncrease / 100) * startPopulation) + startPopulation;
        //display output
        cout << "Population for day " << + i << " is " << dailyPopulation << endl;
        
        startPopulation = dailyPopulation;
    }
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}
