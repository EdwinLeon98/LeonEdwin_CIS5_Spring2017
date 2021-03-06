
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on February 16, 2017, 12:05 PM
 * Purpose: Convert acres to ft^2, miles^2
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float CNVACFT=43560; //1 Acre = 43560 ft^2
const float CNVMIFT=1.0f/5280;//1 Mile = 5280 ft

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    float acres,ftsq,milesq;
    
    //Initialize variables
    acres=1.0f;//Number of acres
    
    //Input data
    
    //Map inputs to outputs or process the data
    ftsq=acres*CNVACFT;
    milesq=ftsq*CNVMIFT*CNVMIFT;
    
    //Output the transformed data
    cout<<acres<<" Acres = "<<ftsq
            <<" ft^2 = "<<milesq<<" miles^2"<<endl;
    
    //Exit stage right!
    return 0;
}

