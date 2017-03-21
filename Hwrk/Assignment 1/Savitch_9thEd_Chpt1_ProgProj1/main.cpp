
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on February 27, 2017, 10:11 AM
 * Purpose: Sum and Product of two integers 
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
    int intg,intg2,sum,prod; //They MUST be integers
  
    //Output the transformed data
    cout<<"Press return after entering an integer"<<endl;
    cout<<"Enter a integer: "<<endl;
    cin>>intg;
    cout<<"Enter a second integer "<<endl;
    cin>>intg2;
    sum=intg-intg2;  //sum of integer1 and integer2
    prod=intg*intg2; //product of integer1 and integer2
    cout<<"The sum of "<<intg<<" and "<<intg2<<" is: "<<sum<<endl;
    cout<<"The product of "<<intg<<" and "<<intg2<<" is: "<<prod<<endl;
    //Exit stage right!
    return 0;
}

