/* 
  File:   main.cpp
  Author: Sean Holloway
  Created on March 1, 2017, 2:30 PM
  Purpose:  Calculate the Gas Tax and Profit Percentage
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const float PERCENT=100;//Percentage

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float fedTax=0.184,   //Federal Tax per gallon
          sTax=0.39,      //State excise tax per gallon
          spTax=0.1,      //State cap and trade tax cents per gallon
          sSalesTax=0.08, //State sales tax = 8% of base price
          oilPrft=0.07;   //Oil company profit per gallon
    float pumpPr,basePr;  //Pump and base price in $'s
    float pctTax,pctPrft; //Percentage tax, Percentage profit
    
    //Input data
    cout<<"The amount it cost you per gallon the last time you put gas in your car $'s?";
    cin>>pumpPr;
    
    //Map inputs to outputs or process the data
    basePr=(pumpPr-fedTax-sTax-spTax)/(1+sSalesTax);
    pctTax=(basePr*sSalesTax+fedTax+sTax+spTax)/basePr*PERCENT;
    pctPrft=oilPrft/basePr*PERCENT;
    
    //Output the transformed data
    cout<<"Federal tax/gallon          = $"<<fedTax<<endl;
    cout<<"State tax/gallon            = $"<<sTax<<endl;
    cout<<"Cap and trade tax/gallon    = $"<<spTax<<endl;
    cout<<"State sales tax/gallon      = $"<<sSalesTax*basePr<<endl;
    cout<<"Base Price/gallon           = $"<<basePr<<endl;
    cout<<"Oil company profit/gallon   = "<<pctPrft<<"%"<<endl;
    cout<<"Total percentage tax/Gallon = "<<pctTax<<"%"<<endl;
    
    //Exit stage right!
    return 0;
}