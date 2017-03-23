
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on March 23, 2017, 11:36 AM
 * Purpose: Sum 1 to N.
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
    //Make sure 0<=n<=400000
    int n=40000,sum=0;
    
    //Input data
 
    //Map inputs to outputs or process the data
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    
    //Output the transformed data
    cout<<"The computed sum of 1 to "<<n<<" = "<<sum<<endl;
    cout<<"and "<<n<<"*("<<n<<"+1)/2="<<n*(n+1)/2<<endl;
    
    //Exit stage right!
    return 0;
}

