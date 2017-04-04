/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on April 3, 2017, 10:30 PM
  Purpose:  The Greatest and Least of These

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
    int number = 0;
    int high;
    int low;
    int counter = 0;
    
    //Input values
     
    while (number != -99)
    {
        cout << "Please enter whole numbers. Enter -99 to end ";
        cin >> number;
        
        if (counter == 0)
        {
            high = number;
            low = number;
        }
        else
        {
            if (number > high && number != -99)
                high = number;
            else if (number <low && number != -99)
                low = number;
        }
        counter++;
    }
    cout << "The highest number you entered was " << high << endl;
    cout << "The smallest number you entered was " << low << endl;
    
    //Process by mapping inputs to outputs
    
    //Output values

    //Exit stage right!
    return 0;
}