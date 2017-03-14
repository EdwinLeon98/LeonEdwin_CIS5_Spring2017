
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 08, 2017, 11:01 AM
 * Purpose: Calculate the weight in metric tons and # of boxes 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float TON=35273.92f; //ounces per metric ton
//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    float wt1,    //weight in ounces
          wt2;    //weight in metric tons
    int   nBoxes; //number of boxes to make 1 ton
    
    //Initialize variables
    cout<<"This program calculates the weight of a cereal box in metric tons"
            <<endl;
    cout<<"Insert the weight of a cereal box in ounces: "<<endl;
    cin>>wt1;
    
    //Map inputs to outputs or process the data
    wt2=wt1/TON;
    nBoxes=TON/wt2;
    
    //Output the transformed data
    cout<<"The weight of the cereal box in tons is: "<<wt2<<endl;
    cout<<"The number of boxes to make 1 ton is: "<<nBoxes<<endl;
    
    //Exit stage right!
    return 0;
}

