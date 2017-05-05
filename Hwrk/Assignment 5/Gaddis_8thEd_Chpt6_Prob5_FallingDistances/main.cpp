
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 05, 2017, 11:31 AM
 * Purpose: Calculate falling distance with gravity
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float GRAVITY=9.8f;

//Function Prototypes
void fallingDistance(int,float);

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    int time;
    float d;
    //Initialize variables
    cin>>time;
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    fallingDistance(time,d);

    //Exit stage right!
    return 0;
}

void fallingDistance(int time,float d){
    d=(1/2)*GRAVITY*time*time;
    cout<<"The falling distance is: "<<d<<endl;
}
