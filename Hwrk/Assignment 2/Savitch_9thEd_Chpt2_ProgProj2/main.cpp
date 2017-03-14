
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 09, 2017, 11:46 AM
 * Purpose: Calculate the retroactive pay, new annual salary, and new monthly 
 *          salary.
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
    float payInc=0.076f; //7.6% pay increase
    float preSal,naSal,nmSal,raPay;
    
    //Initialize variables
    cout<<"This program calculates the retro-active pay, the new annual salary"
            ", and the new monthly salary."<<endl;
    cout<<"Insert your previous salary: "<<endl;
    cin>>preSal;
    
    //Map inputs to outputs or process the data
    naSal=(1+payInc)*preSal;
    nmSal=naSal/YEAR;
    raPay=(payInc*preSal)/2;
    
    //Output the transformed data
    cout<<"The Retro-Active Pay is: "<<raPay<<endl;
    cout<<"The New Annual Salary is: "<<naSal<<endl;
    cout<<"The New Monthly Salary is: "<<nmSal<<endl;
    
    //Exit stage right!
    return 0;
}

