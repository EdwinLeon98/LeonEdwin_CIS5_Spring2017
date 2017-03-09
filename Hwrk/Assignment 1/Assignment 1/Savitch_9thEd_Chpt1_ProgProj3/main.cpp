
/* 
 * File:   main.cpp
 * Author: Edwin Leon
 * Created on February 14, 2017, 11:29 AM
 * Purpose: Calculate the total amount of cents
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which systems libraries exist

//User Libraries

//Global Constants 
const int qrt=25; //1 quarter = 25 cents
const int dime=10;//1 dime = 10 cents
const int nick=5; //1 nickel = 5 cents

//Function Prototypes

//Execution begins here 
int main(int argc, char** argv) {
    //Declare variables 
    int Qrt,Dime,Nick,Totl; //Quarter, Dimes, and Nickels

    //Output the transformed data
    cout<<"Press return after entering a number"<<endl;
    cout<<"Enter the number of quarters: "<<endl;
    cin>>Qrt;
    cout<<"Enter the number of dimes: "<<endl;
    cin>>Dime;
    cout<<"Enter the number of nickels: "<<endl;
    cin>>Nick;
    Totl=(Qrt*qrt)+(Dime*dime)+(Nick*nick); //Total amount of cents
    cout<<"Number of quarters: "<<Qrt<<endl;
    cout<<"Number of dimes: "<<Dime<<endl;
    cout<<"Number of nickels: "<<Nick<<endl;
    cout<<"The total amount is: "<<Totl<<"cents"<<endl;
    //Exit stage right!
    return 0;
}

