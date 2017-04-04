/* 
 * File:   main.cpp
 * Author: Sean Holloway
 * Created on April 3, 2017, 11:30 PM
 * Purpose:  Lab Assignment 7
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
    char choice;
    int sideSize = 0;
    int number = 0;
    int high;
    int low;
    int counter = 0;
    float startPopulation = 0.0f;
    int numDays = 0;
    float avgIncrease = 0.0f;
    float dailyPopulation = 0.0f;
    int days = 1;
    double money = 1.0; // 1 penny
    double total = 0.0;
    double dayPay = 0.0;
    float distance;
    float speed;
    int time;
    const float INCREASE = .04;
    const int YEARS = 6;
    float membership = 2500;
    float caloriesBurned;
    float caloriesPerMinute = 3.6f;

    
    //Show menu and loop
    do{
        //Display Menu
        cout<<endl<<endl<<"Type 0 to exit"<<endl;
        cout<<"Type 1 for Sum 1 to n Problem"<<endl;
        cout<<"Type 2 for Sum 0.1 error Problem"<<endl;
        cout<<"Type 3 for Problem 3"<<endl;
        cout<<"Type 4 for Problem 4"<<endl;
        cout<<"Type 5 for Problem 5"<<endl;
        cout<<"Type 6 for Problem 6"<<endl;
        cout<<"Type 7 for Problem 7"<<endl;
        cout<<"Type 8 for Problem 8"<<endl;
        cout<<"Type 9 for Problem 9"<<endl<<endl;
       
        //Input the choice
        cout<<"Problem ";
        cin>>choice;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case '1':{
                //Declare and initialize variables
                //Make sure 0<=n<=40000
                int n=40000,sum=0;

                //Map inputs to outputs or process the data
                for(int i=1;i<=n;i++){
                    sum+=i;
                }

                //Output the transformed data
                cout<<"The computed sum of 1 to "<<n<<" = "<<sum<<endl;
                cout<<"and "<<n<<"*("<<n<<"+1)/2="<<n*(n+1)/2<<endl;
                break;
            }
            case '2':{
                //Declare and initialize variables
                int nLoop=10000000;
                float sum=0.0f,frac=0.1f;

                //Map inputs to outputs or process the data
                for(int i=1;i<=nLoop;i++){
                    sum+=frac;
                }

                //Output the transformed data
                cout<<"The computed sum of "
                        <<frac<<"->"<<nLoop<<" times = "<<sum<<endl;
                cout<<"Simple multiplication of "
                        <<frac<<"x"<<nLoop<<" = "<<frac*nLoop<<endl;
                cout<<"Error = "<<(frac*nLoop-sum)/(frac*nLoop)*100
                        <<"%"<<endl;
                break;
            }
            case '3':{
                cout << "Enter number from 1 to 15 " << endl;
                cin >> sideSize;
                
                for (int r = 1; r <= sideSize; r++)
                {
                    for (int c = 1 ; c <= sideSize; c++)
                    {
                       cout << "X";
                    }
                    cout << endl;
                }
                cout<<"In problem solution 3"<<endl;
                break;
            }
            case '4':{
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

                cout<<"In problem solution 4"<<endl;
                break;
            }
            case '5':{
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

                cout<<"In problem solution 5"<<endl;
                break;
            }
            case '6':{
                cout << "Enter number of Days\n";
                cin >> days;
    
                while (days < 1)
                {
                    cout << "Please enter valid of days\n";
                    cin >> days;
                }
    
                for (int i = 1; i <= days; i++)
                {
                    dayPay = money / 100;
                    cout << "Day " << i << " You earned $" << dayPay << "\n";
                    total += dayPay;
                    money *= 2;
                }
                cout << "Total earnings are $" << total << endl;

                
                cout<<"In problem solution 6"<<endl;
                break;
            }
            case '7':{
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
                
                cout<<"In problem solution 7"<<endl;
                break;
            }
            case '8':{
                for(int i = 1; i <= YEARS; i++)
                {
                    membership = membership + (membership * INCREASE);
                    cout << "Year " << i << " fees are: $" << membership << endl;
                }
                
                cout<<"In problem solution 8"<<endl;
                break;
            }
            case '9':{
                for (int i = 10; i <= 30; i+=5)
                {
                    caloriesBurned = i * caloriesPerMinute;
                    cout << "In " << i << " minutes you burned " << caloriesBurned << " calories.\n";
                }
                
                cout<<"In problem solution 9"<<endl;
                break;
            }
            default:{
                cout<<"Exit the program"<<endl;
            }
        }
    }while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}