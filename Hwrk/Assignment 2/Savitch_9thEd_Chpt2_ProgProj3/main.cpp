
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 09, 2017, 11:46 AM
 * Purpose: Calculate the retroactive pay for n months.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float YEAR=12.0f;   //Conversion to months

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    float payInc=0.076f;            //7.6% pay increase
    float preSal,naSal,nmSal,raPay; //Pre salary, new annual and monthly salary, and retro-active pay
    int nMonths;                    //Number of Months
    //Initialize variables
    cout<<"This program calculates the retro-active pay for n months."<<endl;
    cout<<"Insert your previous salary: "<<endl;
    cin>>preSal; //Previous Salary
    cout<<"Insert the number of months: "<<endl;
    cin>>nMonths;//Number of Months
    //Map inputs to outputs or process the data
    raPay=(payInc*preSal)/(YEAR/nMonths); //Retro-Active Pay 
    
    //Output the transformed data
    cout<<"The Retro-Active Pay for "<<nMonths<<" months is: "<<raPay<<endl;
    
    //Exit stage right!
    return 0;
}

