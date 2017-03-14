
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 09, 2017, 06:22 PM
 * Purpose: Calculates the number of gallons stored in the well casing.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float PI=3.1416f;
const float GALONS=7.48;
const float INCH=0.0833f;

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    float r,ht,vol,gal;

    //Input data
    cout<<"This program calculates the amount of water stored"
            "in the well casing."<<endl;
    cout<<"Insert the radius of the well casing in inches: ";
    cin>>r;
    cout<<"Insert the height of the well casing in feet: ";
    cin>>ht;
    
    //Map inputs to outputs or process the data
    vol=PI*(r*r)*ht;
    gal=vol*INCH*GALONS;
    
    //Output the transformed data
    cout<<"The number of gallons stored in a well casing of radius "<<r<<"in."<<endl;
    cout<<"and a of height "<<ht<<"ft. is: "<<gal*INCH<<"gallons"<<endl;
    
    //Exit stage right!
    return 0;
}

