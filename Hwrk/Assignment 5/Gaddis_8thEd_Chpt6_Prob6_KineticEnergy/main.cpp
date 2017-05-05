
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 05, 2017, 11:46 AM
 * Purpose: Calculates Kinetic Energy
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 

//Function Prototypes
void kineticEnergy(float,float);

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    float mass,
          vlcity;
    
    //Initialize variables
    cin>>mass;
    cin>>vlcity;
    
    //Output the transformed data
    kineticEnergy(mass,vlcity);
    
    //Exit stage right!
    return 0;
}

void kineticEnergy(float mass,float vlcity){
    float kEnergy;
    kEnergy=(1/2)*mass*vlcity*vlcity;
    cout<<"The kinetic energy is: "<<kEnergy<<endl;
}
