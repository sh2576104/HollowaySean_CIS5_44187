/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on March 10, 2017, 10:00 PM
  Purpose:  Word Game
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
    string name;
    string age;
    string city;
    string college;
    string profession;
    string animal;
    string pname;
   
    //Input values
    cout << "What is your name? ";
    getline(cin,name);
    cout << "How old are you? ";
    getline(cin,age);
    cout << "Name a city ";
    getline(cin,city);
    cout << "Name a college ";
    getline(cin,college);
    cout << "Choose a profession ";
    getline(cin,profession);
    cout << "Choose a type of animal ";
    getline(cin,animal);
    cout << "Name of a pet ";
    getline(cin,pname);


    //Process by mapping inputs to outputs
    
    //Output values
    cout << "There was a person named " <<name;
    cout << " who lived in " <<city<<".";
    cout << " At the age of " << age <<", ";
    cout << name << " went to college at " << college<<". ";
    cout << name << " graduated and went to work as a " << profession<<"."<<endl;
    cout << " Then, " << name;
    cout << " adopted a(n) " << animal;
    cout << " named " << pname <<".";
    cout << " They both lived happily ever after!";
   
    

    //Exit stage right!
    return 0;
}
