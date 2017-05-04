
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 04, 2017, 11:19 AM
 * Purpose: Markup
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float PERCENT=100.0f;

//Function Prototypes
void calculateRetail(float,float,float);

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

void calculateRetail(float saleCst,float markup,float retailP){
    retailP=saleCst+(saleCst*PERCENT/markup);
    cout<<"The retail price is: "<<retailp<<endl;
}
