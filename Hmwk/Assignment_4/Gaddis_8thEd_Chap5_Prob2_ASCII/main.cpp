/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on April 3, 2017, 5:30 PM
  Purpose:  Characters for the ASCII Codes
 */

//System Libraries
#include <iostream>
#include<iomanip>
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
char const* character[] = {"", "", "", "", "", "", "", "",
                            "\\a","\\b","\\t","\\n","\\v","\\f","\\r", "",
                            "", "", "", "", "", "", "", "",
                            "", "", "", "", "", "", "", ""};
    //Input values
        char c;
    int row;
    cout << " ASCII Table" << endl << "=============" << endl;
    for(int i = 0; i < 8; i++)
    {
        row = i;
        while (row <= 127) {
            if (row < 32)
                cout << setfill('0') << setw(2) << setbase(16)
                     << row << " = " << setw(3) << setfill(' ')
                     << character[i] << " | ";
            else if (row >= 32 && row < 127)
            {
                c = row;
                cout << setfill('0') << setw(2) << setbase(16)
                     << row << " = " << setw(3) << setfill(' ')
                     << c << " | ";
            }
            else
                cout << setfill('0') << setw(2) << setbase(16)
                     << row << " = " << setw(3) << setfill(' ')
                     << "DEL" << " | ";
            row = row + 8;
        }
        cout << endl;
    }
 

    //Process by mapping inputs to outputs
    
    //Output values
    cout << "!" << endl;

    //Exit stage right!
    return 0;
}