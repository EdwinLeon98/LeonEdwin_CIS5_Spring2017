
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 23, 2017, 11:36 AM
 * Purpose: Brute force sum compare to multiplication
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables and initialize
    int nLoop=10000000;       //number of loops
    float sum=0.0f,frac=0.1f; 
    
    //Input data
 
    //Map inputs to outputs or process the data
    for(int i=1;i<=nLoop;i++){
        sum+=frac;
    }
    
    //Output the transformed data
    cout<<"The computed sum of "
            <<frac<<"->"<<nLoop<<" times = "<<sum<<endl;
    cout<<"Simple multiplication of "
            <<frac<<"x"<<nLoop<<" = "<<frac*nLoop<<endl;
    cout<<"Error = "<<(frac*nLoop-sum)/(frac*nLoop)*100
            <<"%"<<endl;
    
    //Exit stage right!
    return 0;
}


