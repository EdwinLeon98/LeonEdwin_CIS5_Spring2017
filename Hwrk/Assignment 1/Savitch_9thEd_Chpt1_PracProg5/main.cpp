
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on February 21, 2017, 05:30 PM
 * Purpose: Calculate the total length of a fence.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    int width, height, tLength; //In feet
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"Press return after entering a number.\n";
    cout<<"Enter the width of the fence:\n";
    cin>>width;
    cout<<"Enter the height of the fence:\n";
    cin>>height;
    tLength=width+width+height+height;
    cout<<"The total length of the fence to enclose the rectangular area is: "
            <<tLength<<" ft"<<endl;      
    //Exit stage right!
    return 0;
}

