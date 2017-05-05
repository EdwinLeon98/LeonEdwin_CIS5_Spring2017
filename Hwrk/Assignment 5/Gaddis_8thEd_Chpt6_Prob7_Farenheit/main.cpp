
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on May 05, 2017, 12:27 PM
 * Purpose: Changes Farenheit to Celcius
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 

//Function Prototypes
void celcius(float);

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    float fheit;
    //Initialize variables
 
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    celcius(fheit);
    //Exit stage right!
    return 0;
}

void celcius(float fheit){
    cout<<setprecision(2)<<fixed<<showpoint;
    float celcius;
    for(int i=0;i<=20;i++){
        celcius=(5/9)*(i-32);
        cout<<setw(2)<<i<<setw(7)<<celcius<<endl;
    }
}

