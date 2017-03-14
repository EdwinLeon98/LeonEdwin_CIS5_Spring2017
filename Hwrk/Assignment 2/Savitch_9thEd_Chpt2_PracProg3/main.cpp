
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 09, 2017, 05:08 PM
 * Purpose: Convert miles per hour into minutes and seconds per mile
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float MINS=60.0f;    //Conversion from hours to minutes
const float SECS=3600.0f;  //Conversion from hours to seconds
//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    float mpm,spm; //Minutes and seconds per mile
    float mph;     //Miles per hour

    //Input data
    cout<<"This program converts from Miles/hour to Minutes and Seconds "
            "per hour."<<endl;
    cout<<"Insert a value for miles per hour: "<<endl;
    cin>>mph;
            
    //Map inputs to outputs or process the data
    mpm=MINS/mph;
    spm=SECS/mph;
    
    //Output the transformed data
    cout<<"The conversion to minutes per mile is: "<<mpm<<endl;
    cout<<"The conversion to seconds per mile is: "<<spm<<endl;
    
    //Exit stage right!
    return 0;
}

