
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 20, 2017, 06:21 PM
 * Purpose: Shows whether the sphere will sink or float in water.
 */

//System Libraries
#include <iostream>  //Input - Output Library

using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const float PI=3.14f; //Pi
//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    float y=62.4f; //Weight of water in lb/ft^3
    float Fb,      //Buoyant force
          wt,      //Weight of the sphere in pounds
          r,       //Radius of the sphere in feet
          V;       //Volume of the sphere
    char  result;  //Float or sink
    
    //Initialize variables
    cout<<"This program calculates if the sphere will float or sink"<<endl;
    cout<<"Type in the weight of the sphere: "<<endl;
    cin>>wt;       //Inputs the weight in pounds
    cout<<"Type in the radius of the sphere: "<<endl;
    cin>>r;        //Inputs the radius in feet

    //Map inputs to outputs or process the data
    V=(4/3)*PI*r*r*r;  //Volume of a sphere
    Fb=V*y;            //Buoyant force

    if (Fb>=wt)     result='F';
    else if (Fb<wt) result='S';
    
    //Output the transformed data
    cout<<"The buoyant force is: "<<Fb<<endl;
    cout<<"If the weight of the sphere is: "<<wt<<" pounds"<<endl;
    cout<<"and the radius of the sphere is: "<<r<<" feet,"<<endl;
    cout<<"then the sphere will "<<result<<endl;
    cout<<"F=float and S=sink"<<endl;
    
    //Exit stage right!
    return 0;
}

