
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 16, 2017, 12:04 PM
 * Purpose: Linear search
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
    const int SIZE=12;
    int values[SIZE]={0,1,2,3,0,1,2,3,0,1,2,3};
    int value = 1;
   
    //Initialize variables
    cout<<"The value '1' is on position ";
    for(int i=0;i<SIZE;i++){
        if(values[i]==value){
            cout<<i<<" ";
        }
    }
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
   
    //Exit stage right!
    return 0;
}

