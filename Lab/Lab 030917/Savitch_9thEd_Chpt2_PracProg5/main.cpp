
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 09, 2017, 12:27 PM
 * Purpose: Rewrite the program using indentation, comments and named constants. 
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float PI=3.1415f; //PI
//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    float r,  //Radius of a sphere
          vol;//Volume of the sphere
    
    //Input data
    cout<<"Enter the radius of a sphere: "<<endl;
    cin>>r; //Radius of the sphere
    
    //Map inputs to outputs or process the data
    vol=(4.0/3.0)*PI*r*r*r;
    
    //Output the transformed data
    cout<<"If the the radius of the sphere is "<<r<<
            ", then its volume is: "<<vol<<endl;
    //Exit stage right!
    return 0;
}

