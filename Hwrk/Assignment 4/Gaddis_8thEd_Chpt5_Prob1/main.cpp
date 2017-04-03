
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on April 03, 2017, 03:06 PM
 * Purpose: Sum of 1 to a number
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
    int n,sum=0;
    
    //Input data
    cout<<"This program adds up all the integers from 1 to N"<<endl;
    cout<<"Type an integer between (1-360000) for N (must be positive)"<<endl;
    cin>>n; //Integer
    
    //Map inputs to outputs or process the data
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    
    //Output the transformed data
    cout<<"The computed sum of 1 to "<<n<<" = "<<sum<<endl;
    
    //Exit stage right!
    return 0;
}

